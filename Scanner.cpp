#include "list"
#include "iostream"
#include "Scanner.h"
#include "Categorie.h"
#include "Command.h"
#include "Token.h"
using namespace std;

ifstream myFile;
list<char> letters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
list<char> numberChars = {'0','1','2','3','4','5','6','7','8','9','.'};
list<char> pointOperators = {'*','/'};
list<char> dashOperators = {'-','+'};
list<Category> categories = {
        Category(' ', space),
        Category(letters, letter),
        Category(numberChars, number),
        Category('\\', latexCommandOperator),
        Category('{', BraceOpenCurly),
        Category('}', BraceCloseCurly),
        Category('(', BraceOpenNormal),
        Category(')', BraceCloseNormal),
        Category(pointOperators,pointOperator),
        Category(dashOperators, dashOperator),
        Category('=', equalsOperator),
        Category(';', semicolon),
};
list<Command> commands = {
        Command("cook", cook),
        Command("Term", declaration),
        Command("calc", calc),
};
list<string> latexCommands = {"frac",};
list<Token> tokens;
string currentLine;
char currentChar;

Scanner::Scanner(const string& path) {
    myFile.open(path);
}


 list<Token> Scanner::scan() {
    if(myFile.is_open()){
        while (getline(myFile, currentLine)){
            currentLine += " ";
            TokenTypes lastCharacterType = space;
            string str;
            for(char i : currentLine){
                currentChar = i;
                TokenTypes thisCharacterType = getCharType();
                if(currentChar == ' '){
                    addToken(lastCharacterType, str);
                }
                else if(thisCharacterType != letter && thisCharacterType != number)
                {
                    addToken(lastCharacterType, str);
                    string s(1,currentChar);
                    tokens.emplace_back(s, thisCharacterType);
                }
                else{
                    str += currentChar;
                }
                lastCharacterType = thisCharacterType;
            }
        }
        for (const Token &t: tokens)
            cout << "Token:" + t.token + " " + "Type:" + to_string(t.type) << endl;

        cout << "scanning finished" << endl;
    }
    else{
        cout << "unable To open file"<< endl;
    }
    return tokens;
}

void Scanner::addToken(const TokenTypes &lastCharacterType, string &str) {
    string temp = str;
    str = "";
    if(!temp.empty()){
        for(const Command c: commands){
            if(temp == c.name){
                tokens.emplace_back(temp,c.type);
                return;
            }
        }
        for(const string& s: latexCommands){
            if(temp == s){
                tokens.emplace_back(temp, latexCommand);
                return;
            }
        }
        if(lastCharacterType==number){
            tokens.push_back(*new Token(temp,number));
        } else tokens.push_back(*new Token(temp,name));
    }
}

TokenTypes Scanner::getCharType() {
    for(int j = 0; j < categories.size(); j++){
        Category category = *next(categories.begin(),j);
        if(currentChar == category.c){
            return category.typeOfChars;
        }
        for(char c: category.chars){
            if(currentChar == c){
                return category.typeOfChars;
            }
        }
    }
    throw invalid_argument("unidentified token:'" + string(1,currentChar));
}




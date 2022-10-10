#include <list>
#include "iostream";
#include "Scanner.h";
#include "list";
#include "Token.h"

using namespace std;

ifstream myFile;
list<char> letters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
list<char> numberChars = {'0','1','2','3','4','5','6','7','8','9','.'};
list<char> latexOperators = {'\\'};
list<char> braces = {'(',')','{','}'};
list<char> pointOperators = {'*','/'};
list<char> dashOperators = {'-','+'};
list<char> specialChars = {',','='};
list<list<char>> categories = {letters, numberChars,latexOperators,braces,pointOperators,dashOperators, specialChars};
list<string> commands = {"calc","Term","Func","Draw","cook"};
list<string> latexCommands = {"frac",};
list<Token> tokens;
string currentLine;
char currentChar;

Scanner::Scanner(string path) {
    myFile.open(path);
}


string Scanner::scan() {
    if(myFile.is_open()){
        while (getline(myFile, currentLine)){
            currentLine += " ";
            TokenTypes lastCharacterType = null;
            string str = "";
            for(int i = 0; i< currentLine.size();i++){
                currentChar = currentLine.at(i);
                TokenTypes thisCharacterType = getCharType();
                if(currentChar == ' '){
                    addToken(lastCharacterType, str);
                }
                else if(thisCharacterType == specialCharacter|| thisCharacterType == brace|| thisCharacterType == latexChar ||thisCharacterType ==pointOperator||thisCharacterType == dashOperator)
                {
                    addToken(lastCharacterType, str);
                    string s(1,currentChar);
                    tokens.push_back(*new Token(s, thisCharacterType));
                }
                else{
                    str += currentChar;
                }
                lastCharacterType = thisCharacterType;
            }
        }
        for(Token t : tokens){
            cout<< "Token:"+ t.token + " " + "Type:"+to_string(t.type) + " isCommand:" + to_string(t.commandType)<< endl;
        }
        cout << "scanning finished" << endl;
    }
    else{
        cout << "unable To open file"<< endl;
    }
}

void Scanner::addToken(const TokenTypes &lastCharacterType, string &str) {
    string temp = str;
    str = "";
    if(!temp.empty()){
        for(const string& s: commands){
            if(temp == s){
                tokens.push_back(*new Token(temp,lastCharacterType,command));
                return;
            }
        }
        for(const string& s: latexCommands){
            if(temp == s){
                tokens.push_back(*new Token(temp, lastCharacterType, latexCommand));
                return;
            }
        }
        if(lastCharacterType==number){
            tokens.push_back(*new Token(temp,lastCharacterType,notACommand));
        } else tokens.push_back(*new Token(temp,lastCharacterType,name));
    }
}

TokenTypes Scanner::getCharType() {
    TokenTypes thisCharacterType;
    for(int j = 0; j < categories.size(); j++){
        for(char c: *next(categories.begin(),j)){
            if(currentChar == c){
                thisCharacterType = static_cast<TokenTypes>(j+1);
            }
            if(currentChar == ' '){
                thisCharacterType = null;
            }
        }
    }
    return thisCharacterType;
}




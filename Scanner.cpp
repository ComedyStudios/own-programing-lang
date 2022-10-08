#include <list>
#include "iostream";
#include "Scanner.h";
#include "list";
using namespace std;

ifstream myFile;
list<char> letters = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
list<char> numberChars = {'0','1','2','3','4','5','6','7','8','9','.'};
list<char> specialChars = {'\\','$','(',')','{','}',',','/','*','=','-','+'};
list<list<char>> categories = {letters, numberChars, specialChars};
list<string> tokens;

Scanner::Scanner(string path) {
    myFile.open(path);
}
enum TokenTypes{
    null,
    letter,
    number,
    specialCharacter,
};

string Scanner::scan() {
    if(myFile.is_open()){
        string line;
        while (getline(myFile, line)){
            line += " ";
            TokenTypes lastCharacterType = null;
            string str = "";
            for(int i = 0; i< line.size();i++){
                TokenTypes thisCharacterType;
                for(int j = 0; j< categories.size();j++){
                    for(char c: *next(categories.begin(),j)){
                        if(line.at(i) == c){
                            thisCharacterType = static_cast<TokenTypes>(j+1);
                        }
                    }
                }
                if(line.at(i) == ' '){
                    if(str != ""){
                        tokens.push_back(str);
                        str = "";
                    }
                    thisCharacterType = null;
                }
                else if(thisCharacterType == specialCharacter)
                {
                    if(str != ""){
                        tokens.push_back(str);
                        str = "";
                    }
                    string s(1,line.at(i));
                    tokens.push_back(s);
                }
                else{
                    str += line.at(i);
                }
                lastCharacterType = thisCharacterType;
            }
        }
        for(string str : tokens){
            cout<< str<< endl;
        }
        cout << "scanning finished" << endl;
    }
    else{
        cout << "unable To open file"<< endl;
    }
}




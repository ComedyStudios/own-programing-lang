//
// Created by muluc on 07.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_SCANNER_H
#define COMPILER_PROGRAMMINGLANG_SCANNER_H
#include "list"
#include "iostream"
#include "fstream"
#include "TokenTypes.h"
#include "Token.h"

using namespace std;

class Scanner {
    public:
        explicit Scanner(const string& path);
        list<Token> scan();
        TokenTypes getCharType();
        static void addToken(const TokenTypes &lastCharacterType, string &str);
};




#endif //COMPILER_PROGRAMMINGLANG_SCANNER_H

//
// Created by muluc on 09.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKEN_H
#define COMPILER_PROGRAMMINGLANG_TOKEN_H
#include "iostream"
#include "Scanner.h"
using namespace std;


class Token {
    public:
        string token;
        TokenTypes type;
        Token(string s, TokenTypes t);
};





#endif //COMPILER_PROGRAMMINGLANG_TOKEN_H

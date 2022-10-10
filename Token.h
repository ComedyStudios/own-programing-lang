//
// Created by muluc on 09.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKEN_H
#define COMPILER_PROGRAMMINGLANG_TOKEN_H
#include "iostream"
#include "Scanner.h"
using namespace std;

enum CommandTypes{
    notACommand,
    command,
    latexCommand,
    name,
};

class Token {
    public:
        string token;
        TokenTypes type;
        CommandTypes commandType;
        Token(string s, TokenTypes t, CommandTypes = notACommand);
};





#endif //COMPILER_PROGRAMMINGLANG_TOKEN_H

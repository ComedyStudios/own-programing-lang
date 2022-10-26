//
// Created by muluc on 13.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_PARSER_H
#define COMPILER_PROGRAMMINGLANG_PARSER_H


#include "Token.h"
#include "list"
using namespace std;

class Parser {
public:
    list<Token> tokens;
    explicit Parser(list<Token> tokenList);
    void Parse();
};


#endif //COMPILER_PROGRAMMINGLANG_PARSER_H

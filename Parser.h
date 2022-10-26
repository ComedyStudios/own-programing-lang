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
        _List_iterator<Token> currentToken;
        explicit Parser(list<Token> tokenList);
        void Parse();
    private:
        void Error(string s);
        void ManageDeclaration(_List_iterator<Token> t);


};


#endif //COMPILER_PROGRAMMINGLANG_PARSER_H

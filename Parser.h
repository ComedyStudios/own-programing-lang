//
// Created by muluc on 13.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_PARSER_H
#define COMPILER_PROGRAMMINGLANG_PARSER_H


#include "Token.h"
#include "list"
#include "TokenNode.h"

using namespace std;

class Parser {
    public:
        list<Token> tokens;
        _List_iterator<Token> currentToken;
        list<TokenNode> variables;
        explicit Parser(list<Token> tokenList);
        void Parse();
    private:
        static void Error(const string& s);
        void ManageDeclaration();
        TokenNode GetOperator();
        TokenNode GetLatexExpressionNodes();
        TokenNode GetVariableNodes();
};


#endif //COMPILER_PROGRAMMINGLANG_PARSER_H

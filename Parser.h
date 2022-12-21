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
        list<TokenNode> methods;
        TokenNode mainNode;
        explicit Parser(list<Token> tokenList);
        void Parse();
    private:
        static void Error(const string& s);
        void ManageDeclaration();
        TokenNode GetLatexExpressionNodes();
        TokenNode GetVariableNodes(string &variableName);

    TokenNode GetOperator();

    TokenNode getValue();

    list<struct TokenNode> GetParameters();

    TokenNode GetBlock();

    TokenNode GetBoolOperator();

    TokenNode CheckCheckIfTokensAreABoolean();

    TokenNode GetBoolParameter();

    TokenNode &GetLogicExpression();
};


#endif //COMPILER_PROGRAMMINGLANG_PARSER_H

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
        bool IsInsideMethod = false;
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

    TokenNode GetAssertionValue();

    TokenNode getValue();

    list<struct TokenNode> GetMethodDeclarationParameters();

    TokenNode GetBlock();

    TokenNode GetBoolOperator();

    TokenNode CheckCheckIfTokensAreABoolean();

    TokenNode GetParameter();

    TokenNode &GetLogicExpression();

    TokenNode SaveMethodCall(string methodName);

    void ModifyValueOfVariable(const TokenNode &temp);

    void CallMethod();
};


#endif //COMPILER_PROGRAMMINGLANG_PARSER_H

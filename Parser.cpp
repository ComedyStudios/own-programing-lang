//
// Created by muluc on 13.10.2022.
//

#include "Parser.h"

#include <utility>

using namespace std;

Parser::Parser(list<Token> tokenList) {
    tokens = std::move(tokenList);
}

void Parser::Parse() {
    currentToken = tokens.begin();
    advance(currentToken,1);
    if (currentToken->type != BraceOpenCurly) {
        Error("'{' expected");
    }
    currentToken = tokens.begin();
    advance(currentToken,tokens.size()-1);
    if(currentToken->type != BraceCloseCurly){
        Error("'}' expected");
    }
    currentToken = tokens.begin();
    advance(currentToken, 2);
    switch (currentToken->type) {
        case declaration:
            ManageDeclaration();
            break;
        default:
            Error("unidentified token");
            break;
    }
}
void Parser::Error(const string& s) {
    cout << "ERROR:"<< s <<endl;
    abort();
}

void Parser::ManageDeclaration() {
    string declaredType = currentToken->token;
    TokenNode nameNode;
    //connect the type and name nodes
    TokenNode typeNode = *new TokenNode(currentToken->token, declaration);
    advance(currentToken, 1);

    if(currentToken->type == name){
        nameNode = *new TokenNode(currentToken->token, name);

    } else Error("Nach einer Deklaration muss immer ein name stehen");

    advance(currentToken,1);
    if(currentToken->type == equalsOperator){
        advance(currentToken,1);
        if(declaredType == "Term")
        {
            //connect the name of the variable with the value of the variable
            nameNode.nodes.emplace_back(GetOperator());
            typeNode.nodes.emplace_back(nameNode);
        }
    }
    variables.emplace_back(typeNode);


    cout << "TODO: (not completely implemented) manage declaration";
}

TokenNode Parser::GetOperator() {
    //check if operator is a number
    if(currentToken->type == number){
        return *new TokenNode(currentToken);
    }

    //check if the Operator is a latex declaration
    else if(currentToken->type == latexCommandOperator){
        advance(currentToken,1);
        if(currentToken->type == latexCommand){
            advance(currentToken,1);
            return GetLatexExpressionNodes();
        }
    }
    // check if operator is a variable
    else if (currentToken->type == name){
        return GetVariableNodes();
    }
    else Error("GetOperator: unexpected token");
}

TokenNode Parser::GetLatexExpressionNodes() {
    Error("not yet implemented: GetLatexExpressionNodes");
}

TokenNode Parser::GetVariableNodes() {
    Error("not yet implemented:GetVariableNodes" );
}



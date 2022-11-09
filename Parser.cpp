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

    //Do the parsing until the parses sees the last curly brace which is supposed to end the cook method
    while(currentToken->type != BraceCloseCurly){
        switch (currentToken->type) {
            case declaration:
                ManageDeclaration();
                advance(currentToken,1);
                break;
            default:
                Error("unidentified token");
                break;
        }
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
        if(declaredType == "Term"){
            advance(currentToken,1);
            //connect the name of the variable with the value of the variable
            nameNode.nodes.emplace_back(GetOperator());
            typeNode.nodes.emplace_back(nameNode);
        }
        else Error("invalid or unimplemented declaration");
    }
    else Error(" '=' expected ");
    variables.emplace_back(typeNode);
    cout << "TODO: (not completely implemented) manage declaration";
}

TokenNode Parser::GetOperator() {
    //check if operator is a number
    TokenNode nodeToReturn = getValue();
    advance(currentToken,1);
    if(currentToken->type == dashOperator || currentToken -> type == pointOperator){
        list<TokenNode> nodes;
        nodes.emplace_back(nodeToReturn);
        nodeToReturn= currentToken;
        advance(currentToken,1);
        nodes.emplace_back(getValue());
        nodeToReturn.nodes = nodes;
    }
    else advance(currentToken, -1);
    return nodeToReturn;
}

TokenNode Parser::getValue() {
    TokenNode nodeToReturn = *new TokenNode();
    if(currentToken->type == number){
        nodeToReturn = *new TokenNode(currentToken);
    }

    //check if the Operator is a latex declaration
    else if(currentToken->type == latexCommandOperator){
        advance(currentToken, 1);
        if(currentToken->type == latexCommand){
            advance(currentToken, 1);
            nodeToReturn = GetLatexExpressionNodes();
        }
    }
    // check if operator is a variable
    else if (currentToken->type == name){
        nodeToReturn = GetVariableNodes(currentToken->token);
    }
    else Error("GetOperator: unexpected token");
    return nodeToReturn;
}

TokenNode Parser::GetLatexExpressionNodes() {
    Error("not yet implemented: GetLatexExpressionNodes");
}

TokenNode Parser::GetVariableNodes(string& name) {
    //TODO: do a typecheck here and see if the variable is compatible with the format
    for(int i = 0; i< variables.size(); i++){
       TokenNode variable = *next(variables.begin(), i);
       TokenNode variableName = *variable.nodes.begin();
       TokenNode valueNode = *variableName.nodes.begin();
       if(variableName.name == name){
            return valueNode;
       }
    }
    Error("variable not declared");
}



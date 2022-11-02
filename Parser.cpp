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
        if(declaredType == "Term"){
            advance(currentToken,1);
            //connect the name of the variable with the value of the variable
            nameNode.nodes.emplace_back(GetOperator(currentToken));
            typeNode.nodes.emplace_back(nameNode);
        }
        else Error("invalid or unimplemented declaration");
    }
    else Error(" '=' expected ");
    variables.emplace_back(typeNode);
    cout << "TODO: (not completely implemented) manage declaration";
}

TokenNode Parser::GetOperator(_List_iterator<Token> t) {
    //check if operator is a number
    if(t->type == number){
        return *new TokenNode(t);
    }

    //check if the Operator is a latex declaration
    else if(t->type == latexCommandOperator){
        advance(t,1);
        if(t->type == latexCommand){
            advance(t,1);
            return GetLatexExpressionNodes();
        }
    }
    // check if operator is a variable
    else if (t->type == name){
        return GetVariableNodes(t->token);
    }
    else Error("GetOperator: unexpected token");
}

TokenNode Parser::GetLatexExpressionNodes() {
    Error("not yet implemented: GetLatexExpressionNodes");
}

TokenNode Parser::GetVariableNodes(string& variableName) {
    for(int i = 0; i< variables.size(); i++){
       TokenNode variable = *next(variables.begin(), i);
       if(variable.nodes.begin()->name == variableName){
            return variable;
       }
    }
    Error("variable not declared");
}



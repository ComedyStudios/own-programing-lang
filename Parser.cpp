//
// Created by muluc on 13.10.2022.
//

#include "Parser.h"

using namespace std;

Parser::Parser(list<Token> tokenList) {
    tokens = tokenList;
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
            ManageDeclaration(currentToken);
            break;
        default:
            Error("unidentified token");
            break;
    }
}
void Parser::Error(std::string s) {
    cout << "ERROR:"<< s <<endl;
    abort();
}

void Parser::ManageDeclaration(_List_iterator<Token> t) {
    string token = t->token;
    advance(currentToken, 1);
    if(currentToken->type != name){
        Error("Nach einer Deklaration muss immer ein name stehen");
    }
    advance(currentToken,1);

    if(currentToken->type == equalsOperator){
        advance(currentToken,1);
        //TODO: save the value to memory
        if(token == "int")
        {
            if(currentToken->type != number){
                Error("invalid assertion number is not valid maybe use Term instead");
            }
            else if(currentToken->token.find('.')){
                Error("invalid assertion use float instead");
            }
        }
    }
    else{
        //TODO: save the value to memory
    }

    cout << "TODO: manage declaration";
}

bool Parser::isOperator(_List_iterator<Token> t) {

    if(t->type == number){
        return true;
    }
    //check if the Operator is a latex declaration
    else if(t->type == latexCommandOperator){
        advance(t,1);
        if(t->type == latexCommand){
            CheckLatexCommandValidity(t);
            return true;
        }
        else{
            Error("Latex declaration expected");
            return false;
        }
    }
    //TODO : check if the operator is saved as a variable
    else return false;
}

void Parser::CheckLatexCommandValidity(_List_iterator<Token> t) {
    Error("not yet implemented");
}



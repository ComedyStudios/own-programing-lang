//
// Created by muluc on 13.10.2022.
//

#include "Parser.h"

Parser::Parser(list<Token> tokenList) {
    tokens = tokenList;
}

void Parser::Parse() {
    auto currentToken = tokens.begin();
    advance(currentToken,1);

//    if(*tokens.begin() == cook && *currentToken ){
//
//    }
}



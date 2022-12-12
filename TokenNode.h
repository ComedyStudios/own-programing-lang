//
// Created by muluc on 28.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKENNODE_H
#define COMPILER_PROGRAMMINGLANG_TOKENNODE_H

#include <list>
#include "iostream"
#include "TokenTypes.h"
#include "Token.h"

using namespace std;

class TokenNode {
public:
    string name;
    TokenTypes type;
    list<TokenNode> nodes;
    list<TokenNode> parametersForMethods;
    TokenNode();
    TokenNode(_List_iterator<Token> token);
    TokenNode(string n, TokenTypes t);
};


#endif //COMPILER_PROGRAMMINGLANG_TOKENNODE_H

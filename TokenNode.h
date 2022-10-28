//
// Created by muluc on 28.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKENNODE_H
#define COMPILER_PROGRAMMINGLANG_TOKENNODE_H
#include "iostream"
#include "TokenTypes.h"
using namespace std;

class TokenNode {
public:
    string name;
    TokenTypes type;
    TokenNode();
    TokenNode(string n, TokenTypes t);
    static TokenNode getRightNode();
    static TokenNode getLeftNode();
    static void setRightNode(string n, TokenTypes t);
    static void setLeftNode(string n, TokenTypes t);
};


#endif //COMPILER_PROGRAMMINGLANG_TOKENNODE_H

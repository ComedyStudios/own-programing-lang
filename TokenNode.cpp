//
// Created by muluc on 28.10.2022.
//

#include "TokenNode.h"

#include <utility>

TokenNode::TokenNode() {
    type = space;
    name = "";
}

TokenNode::TokenNode(string n, TokenTypes t) {
    type = t;
    name = std::move(n);
}

TokenNode::TokenNode(_List_iterator<Token> token) {
    type = token->type;
    name = token->token;
}




//
// Created by muluc on 28.10.2022.
//

#include "TokenNode.h"

#include <utility>
TokenNode leftNode;
TokenNode rightNode;


TokenNode::TokenNode() {
    type = space;
    name = "";
}

TokenNode::TokenNode(string n, TokenTypes t) {
    type = t;
    name = std::move(n);
}

TokenNode TokenNode::getLeftNode() {
    return leftNode;
}
TokenNode TokenNode::getRightNode() {
    return rightNode;
}
void TokenNode::setLeftNode(std::string n, TokenTypes t) {
    leftNode = TokenNode(std::move(n),t);
}
void TokenNode::setRightNode(std::string n, TokenTypes t) {
    rightNode = TokenNode(std::move(n),t);
}


//
// Created by muluc on 09.10.2022.
//

#include "Token.h"

#include <utility>

Token::Token(string s, TokenTypes t) {
    token = std::move(s);
    type = t;
}

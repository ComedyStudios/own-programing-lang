//
// Created by muluc on 10.10.2022.
//

#include "Categories.h"

Categories::Categories(char c, TokenTypes type) {
    this->c = c;
    typeOfChars = type;
}

Categories::Categories(list<char> c, TokenTypes type) {
    chars = c;
    typeOfChars = type;
}


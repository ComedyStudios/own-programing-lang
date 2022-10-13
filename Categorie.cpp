//
// Created by muluc on 10.10.2022.
//

#include "Categorie.h"

#include <utility>

Category::Category(char c, TokenTypes type) {
    this->c = c;
    typeOfChars = type;
}

Category::Category(list<char> c, TokenTypes type) {
    chars = std::move(c);
    typeOfChars = type;
}


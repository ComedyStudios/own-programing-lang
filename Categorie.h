//
// Created by muluc on 10.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_CATEGORIE_H
#define COMPILER_PROGRAMMINGLANG_CATEGORIE_H
#include "iostream"
#include "list"
#include "Scanner.h"
using namespace std;

class Category {
    public:
        char c{};
        list<char> chars;
        TokenTypes typeOfChars;
        Category(char c, TokenTypes type);
        Category(list <char> c, TokenTypes type);
};


#endif //COMPILER_PROGRAMMINGLANG_CATEGORIE_H

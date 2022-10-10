//
// Created by muluc on 10.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_CATEGORIES_H
#define COMPILER_PROGRAMMINGLANG_CATEGORIES_H
#include "iostream"
#include "list"
#include "Scanner.h"
using namespace std;

class Categories {
    public:
        char c;
        list<char> chars;
        TokenTypes typeOfChars;
        Categories(char c, TokenTypes type);
        Categories(list <char> c, TokenTypes type);
};


#endif //COMPILER_PROGRAMMINGLANG_CATEGORIES_H

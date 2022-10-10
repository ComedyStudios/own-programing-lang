//
// Created by muluc on 07.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_SCANNER_H
#define COMPILER_PROGRAMMINGLANG_SCANNER_H
#include "iostream"
#include "fstream"
using namespace std;
enum TokenTypes{
    null,
    letter,
    number,
    latexChar,
    brace,
    pointOperator,
    dashOperator,
    specialCharacter,
    command,
    latexCommand,
    name,
};


class Scanner {
    public:
        Scanner(string path);
        static string scan();
        static TokenTypes getCharType();

    static void addToken(const TokenTypes &lastCharacterType, string &str);
};




#endif //COMPILER_PROGRAMMINGLANG_SCANNER_H

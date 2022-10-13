//
// Created by muluc on 07.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_SCANNER_H
#define COMPILER_PROGRAMMINGLANG_SCANNER_H
#include "iostream"
#include "fstream"
using namespace std;
enum TokenTypes{
    space,
    letter,
    number,
    braceOpenNormal,
    braceCloseNormal,
    braceOpenCurly,
    braceCloseCurly,
    pointOperator,
    dashOperator,
    equalsOperator,
    latexCommand,
    calc,
    declaration,
    cook,
    name,

};


class Scanner {
    public:
        Scanner(const string& path);
        static void scan();
        static TokenTypes getCharType();

    static void addToken(const TokenTypes &lastCharacterType, string &str);
};




#endif //COMPILER_PROGRAMMINGLANG_SCANNER_H

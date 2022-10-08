//
// Created by muluc on 07.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_SCANNER_H
#define COMPILER_PROGRAMMINGLANG_SCANNER_H
#include "iostream"
#include "fstream"
using namespace std;

class Scanner {
    public:
        Scanner(string path);
        static string scan();
};


#endif //COMPILER_PROGRAMMINGLANG_SCANNER_H

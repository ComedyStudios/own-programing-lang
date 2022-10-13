//
// Created by muluc on 13.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_COMMAND_H
#define COMPILER_PROGRAMMINGLANG_COMMAND_H
#include "iostream"
#include "Scanner.h"
using namespace std;

class Command {
public:
    string name;
    TokenTypes type;
    Command(string n, TokenTypes t);
};


#endif //COMPILER_PROGRAMMINGLANG_COMMAND_H

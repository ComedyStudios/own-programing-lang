//
// Created by muluc on 17.11.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_LATEXEXPRESSION_H
#define COMPILER_PROGRAMMINGLANG_LATEXEXPRESSION_H
#include "iostream"

using namespace std;

class LatexExpression {
public:
    string expressionName;
    int amountOfArguments;
    LatexExpression(string name, int arguments);
};


#endif //COMPILER_PROGRAMMINGLANG_LATEXEXPRESSION_H

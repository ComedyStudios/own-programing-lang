//
// Created by muluc on 13.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKENTYPES_H
#define COMPILER_PROGRAMMINGLANG_TOKENTYPES_H

enum TokenTypes{
    space,
    letter,
    number,
    BraceOpenNormal,
    BraceCloseNormal,
    BraceOpenCurly,
    BraceCloseCurly,
    pointOperator,
    dashOperator,
    equalsOperator,
    latexCommand,
    latexCommandOperator,
    calc,
    declaration,
    cook,
    name,
    semicolon,
    comma,
};


#endif //COMPILER_PROGRAMMINGLANG_TOKENTYPES_H

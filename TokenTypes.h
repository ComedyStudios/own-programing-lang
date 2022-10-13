//
// Created by muluc on 13.10.2022.
//

#ifndef COMPILER_PROGRAMMINGLANG_TOKENTYPES_H
#define COMPILER_PROGRAMMINGLANG_TOKENTYPES_H

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


#endif //COMPILER_PROGRAMMINGLANG_TOKENTYPES_H

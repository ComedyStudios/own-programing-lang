//
// Created by muluc on 13.10.2022.
//

#include "Parser.h"
#include "LatexExpression.h"

#include <utility>

using namespace std;

Parser::Parser(list<Token> tokenList) {
    tokens = std::move(tokenList);
}

void Parser::Parse() {
    currentToken = tokens.begin();
    if(currentToken->type != cook){
        Error("cook expected");
    }
    mainNode = currentToken;
    advance(currentToken,1);
    if (currentToken->type != BraceOpenCurly) {
        Error("'{' expected");
    }
    currentToken = tokens.begin();
    advance(currentToken,tokens.size()-1);
    if(currentToken->type != BraceCloseCurly){
        Error("'}' expected");
    }
    currentToken = tokens.begin();
    advance(currentToken, 2);

    //Do the parsing until the parses sees the last curly brace which is supposed to end the cook method
    while(currentToken->type != BraceCloseCurly){
        switch (currentToken->type) {
            case declaration:
                ManageDeclaration();
                mainNode.nodes = variables;
                advance(currentToken,1);
                break;
            default:
                mainNode.nodes.emplace_back(GetBlock());
                break;
        }
    }
}

TokenNode Parser::GetBlock() {
    TokenNode tokenToReturn;
    if(currentToken->type == logicOperator){
        tokenToReturn = GetLogicExpression();
    }
    return tokenToReturn;
}

TokenNode &Parser::GetLogicExpression() {
    TokenNode boolExpression;
    TokenNode tokenToReturn = currentToken;
    advance(currentToken, 1);
    if(currentToken->type == BraceOpenNormal){
        advance(currentToken, 1);
         boolExpression = CheckCheckIfTokensAreABoolean();
        advance(currentToken, 1);
        if(currentToken->type == BraceCloseNormal)
        {
            advance(currentToken, 1);
            if(currentToken->type == BraceOpenCurly){
                while(currentToken->type != BraceCloseCurly){
                    boolExpression.nodes.emplace_back(GetBlock());
                    advance(currentToken, 1);
                }
            }else Error("Expected '{");
        }else Error("Expected ')'");
    }
    else Error("'(' Expected");
    tokenToReturn.nodes.emplace_back(boolExpression);
    return tokenToReturn;
}

TokenNode Parser::CheckCheckIfTokensAreABoolean() {
    list<string> valueTypes = {"frac", "Term"};
    list<string> nonValueTypes {"bool", "string"};
    TokenNode nodeToReturn;
    TokenNode RightParameter;
    TokenNode LeftParameter;
    RightParameter = GetBoolParameter();
    advance(currentToken,1);
    nodeToReturn = GetBoolOperator();
    //TODO: you cant use >= or similar on a string fix that!
    advance(currentToken, 1);
    LeftParameter = GetBoolParameter();
    nodeToReturn.nodes.emplace_back(RightParameter);
    nodeToReturn.nodes.emplace_back(LeftParameter);
    //TODO: make that you can use a value instead of a variable
    return nodeToReturn;
}

TokenNode Parser::GetBoolOperator(){
    TokenNode nodeToReturn;
    if(currentToken->token == "="){
        advance(currentToken, 1);
        if(currentToken->token == "="){
            nodeToReturn = TokenNode("==", EquealsBoolTo);
        }
        else if(currentToken->token == "<"){
            nodeToReturn = TokenNode("=<", LesserEquals);
        }
        else if(currentToken->token == "<"){
            nodeToReturn = TokenNode("=<", GraterEquals);
        }
    }
    else if(currentToken->token == ">" || currentToken->token == "<"){
        nodeToReturn = currentToken;
    }
    return nodeToReturn;
}

TokenNode Parser::GetBoolParameter() {
    TokenNode Parameter;
    if(currentToken->type == name){
        Parameter = GetVariableNodes(currentToken->token);
        advance(currentToken, 1);
    }
    else if (currentToken->type == number){
        Parameter = currentToken;
    }
    else if(currentToken->type == QuoatationMarks) {
        advance(currentToken,1);
        if(currentToken->type == name){
            Parameter = TokenNode(currentToken->token, String);
            advance(currentToken, 1);
            if(currentToken->type != QuoatationMarks){
                Error("quotation marks expected");
            }
        }
        else if(currentToken->type == QuoatationMarks){
            Parameter = TokenNode("", String);
        }
        else Error(" a string expected ");
    }
    else Error("unknown Parameter");
    return Parameter;
}

void Parser::ManageDeclaration() {
    string declaredType = currentToken->token;
    TokenNode nameNode;
    //connect the type and name nodes
    TokenNode typeNode = *new TokenNode(currentToken->token, declaration);
    advance(currentToken, 1);

    if(currentToken->type == name){
        nameNode = *new TokenNode(currentToken->token, name);

    } else Error("Nach einer Deklaration muss immer ein name stehen");

    advance(currentToken,1);
    if(currentToken->type == equalsOperator || declaredType != "void"){
        //manage variable declarations
        if(declaredType == "Term"){
            advance(currentToken,1);
            //connect the name of the variable with the value of the variable
            nameNode.nodes.emplace_back(GetOperator());
            typeNode.nodes.emplace_back(nameNode);
        }
        else Error("invalid or unimplemented declaration");
        variables.emplace_back(typeNode);
    }
    else if(currentToken->type == BraceOpenNormal){
        //manage method declarations
        list<TokenNode> parameters = list<TokenNode>();
        advance(currentToken, 1);
        if(currentToken->type != BraceCloseNormal){
            parameters = GetParameters();
        }
        advance(currentToken,2);
        if(currentToken->type == BraceOpenCurly){
           while(currentToken->type != BraceCloseCurly){
               cout<< "this is a token inside the Method body";
               advance(currentToken,1);
           }
            nameNode.parametersForMethods = parameters;
            typeNode.nodes.emplace_back(nameNode);
        }else Error("expected open curly brace");
        methods.emplace_back(typeNode);
    }
    else Error(" '=' or method declaration expected ");

    cout << "TODO: (not completely implemented) manage declaration"<< endl;
}

list<TokenNode> Parser::GetParameters(){
    list<TokenNode> parameterList = list<TokenNode>();
    TokenNode parameter = TokenNode();
    if(currentToken->type == declaration|| currentToken->token != "void"){
        parameter.type = declaration;
        parameter.name= currentToken->token;
        advance(currentToken, 1);
        if(currentToken->type == name) {
            parameter.nodes.emplace_back(TokenNode(currentToken->token,name));
            parameterList.emplace_back(parameter);
            advance(currentToken, 1);
            if(currentToken->type == comma){
                advance(currentToken,1);
                for(const TokenNode& p :GetParameters()){
                    parameterList.emplace_back(p);
                }
            } else advance(currentToken,-1);
        }else Error("the parameter has to be named");
    }
    else Error("parameter expected");
    return parameterList;
}

TokenNode Parser::GetOperator() {
    //check if operator is a number
    TokenNode nodeToReturn = getValue();
    advance(currentToken,1);
    TokenNode lastOperator;
    while (currentToken->type == dashOperator || currentToken -> type == pointOperator){
        if(currentToken->type == pointOperator && lastOperator.type == dashOperator ){
            list<TokenNode> nodes;
            auto previousFactor = lastOperator.nodes.begin();
            advance(previousFactor, lastOperator.nodes.size()-1);
            nodes.emplace_back(*previousFactor);
            TokenNode tempOperatorToken = currentToken;
            advance(currentToken,  1);
            nodes.emplace_back(getValue());
            tempOperatorToken.nodes = nodes;
            lastOperator.nodes.emplace_back(tempOperatorToken);
            lastOperator = tempOperatorToken;
            nodeToReturn.nodes.pop_back();
            nodeToReturn.nodes.emplace_back(tempOperatorToken);
            advance(currentToken, 1);

        }
        else{
            list<TokenNode> nodes;
            nodes.emplace_back(nodeToReturn);
            nodeToReturn= currentToken;
            advance(currentToken,1);
            nodes.emplace_back(getValue());
            nodeToReturn.nodes = nodes;
            lastOperator = nodeToReturn;
            advance(currentToken,1);
        }
    }
    if(currentToken->type != dashOperator && currentToken -> type != pointOperator){
        advance(currentToken, -1);
    }
    return nodeToReturn;
}

TokenNode Parser::getValue() {
    TokenNode nodeToReturn = *new TokenNode();
    if(currentToken->type == number){
        nodeToReturn = *new TokenNode(currentToken);
    }

    //check if the Operator is a latex declaration
    else if(currentToken->type == latexCommandOperator){
        advance(currentToken, 1);
        if(currentToken->type == latexCommand){
            nodeToReturn = GetLatexExpressionNodes();
        }
    }
    // check if operator is a variable
    else if (currentToken->type == name){
        nodeToReturn = GetVariableNodes(currentToken->token);
    }
    else if (currentToken-> type == BraceOpenNormal){
        advance(currentToken, 1);
        nodeToReturn = GetOperator();
        advance(currentToken, 1);
        if(currentToken->type != BraceCloseNormal){
            Error(") expected");
        }
    }
    else Error("GetOperator: unexpected token");
    return nodeToReturn;
}

TokenNode Parser::GetLatexExpressionNodes() {
    list<LatexExpression> LatexExpressions = {LatexExpression("frac",2)};
    TokenNode LatexNodeToReturn;
    for(LatexExpression& exp : LatexExpressions){
        if(exp.expressionName == currentToken->token){
            LatexNodeToReturn.name = currentToken->token;
            advance(currentToken, 1);
            for(int i = 0; i < exp.amountOfArguments; i++){
                if(currentToken->type != BraceOpenCurly){
                    Error("'{' Expected");
                }
                else{
                    advance(currentToken, 1);
                }
                LatexNodeToReturn.nodes.emplace_back(GetOperator());
                advance(currentToken, 1);
                if(currentToken->type != BraceCloseCurly){
                    Error("'}' Expected");
                }
                else{
                    advance(currentToken, 1);
                }
            }
            advance(currentToken, -1);
        }
    }
    return LatexNodeToReturn;
}

TokenNode Parser::GetVariableNodes(string& name) {
    //TODO: do a typecheck here and see if the variable is compatible with the format
    for(int i = 0; i< variables.size(); i++){
        TokenNode variable = *next(variables.begin(), i);
        TokenNode variableName = *variable.nodes.begin();
        TokenNode valueNode = *variableName.nodes.begin();
        if(variableName.name == name){
            return valueNode;
        }
    }
    Error("variable not declared");
}

void Parser::Error(const string& s) {
    cout << "ERROR:"<< s <<endl;
    abort();
}





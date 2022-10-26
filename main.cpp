#include <iostream>
#include <list>
#include "Scanner.h"
#include "Parser.h"

string filePath = "test.meth";
int main() {
    auto scanner = new Scanner(filePath);
    list<Token> tokens = scanner->scan();
    auto parser = new Parser(tokens);
    parser->Parse();
    delete scanner;
}

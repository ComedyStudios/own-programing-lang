#include <iostream>
#include <list>
#include "Scanner.h"

string filePath = "test.meth";
int main() {
    auto scanner = new Scanner(filePath);
    //scanner->scan();
    list<Token> tokens = scanner->scan();
    delete scanner;
}

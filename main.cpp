#include <iostream>
#include "Scanner.h"

string filePath = "test.meth";
int main() {
    Scanner *scanner = new Scanner(filePath);
    scanner->scan();
    delete scanner;
}

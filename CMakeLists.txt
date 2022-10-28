cmake_minimum_required(VERSION 3.23)
project(compiler_programmingLang)

set(CMAKE_CXX_STANDARD 20)

add_executable(compiler_programmingLang main.cpp Scanner.cpp Scanner.h Token.cpp Token.h Categorie.cpp Categorie.h Command.cpp Command.h Parser.cpp Parser.h TokenTypes.h TokenNode.cpp TokenNode.h)

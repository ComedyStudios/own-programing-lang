//
// Created by muluc on 13.10.2022.
//

#include "Command.h"

#include <utility>
Command::Command(string n, TokenTypes t) {
    name = std::move(n);
    type = t;
}

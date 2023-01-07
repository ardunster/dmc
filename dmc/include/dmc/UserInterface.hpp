#pragma once
#include <iostream>

class UserInterface
{
public:
    enum class Command
    {
        INVALID = -1,
        ENCOUNTER = 1
    };

    int Interface();

    Command parse(std::string input);
};

#ifndef DMC_USERINTERFACE_HPP
#define DMC_USERINTERFACE_HPP
#include <iostream>
#include "onestring/onestring.hpp"

class UserInterface
{
public:
    enum class Command
    {
        INVALID = -1,
        ENCOUNTER = 1
    };

    int Interface();

    Command parseCommand(onestring input);
};

#endif // !DMC_USERINTERFACE_HPP

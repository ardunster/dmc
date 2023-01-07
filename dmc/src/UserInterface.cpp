#include <iostream>
#include "../include/dependencies/doctest.h"
#include "../include/dmc/UserInterface.hpp"

int UserInterface::Interface()
{
    std::cout << "Running Interface function" << std::endl;
    return 0;
};

UserInterface::Command UserInterface::parse(std::string input)
{
    return UserInterface::Command::INVALID;
};

TEST_CASE("Interface returns 0")
{
    UserInterface userInterface;
    CHECK(userInterface.Interface() == 0);
};

TEST_SUITE("UserInterface Parse")
{
    UserInterface userInterface;

    TEST_CASE("Defaults to returning INVALID")
    {
        CHECK(userInterface.parse("Steve") == UserInterface::Command::INVALID);
    };

    TEST_CASE("Returns ENCOUNTER when input is encounter")
    {
        CHECK(userInterface.parse("encounter") == UserInterface::Command::ENCOUNTER);
    };
};

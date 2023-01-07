#include <iostream>
#include "../include/dependencies/doctest/doctest.h"
#include "../include/dmc/UserInterface.hpp"

int UserInterface::Interface()
{
    std::cout << "Running Interface function" << std::endl;
    return 0;
};

// bool isEncounter(std::string input)
// {
//     if (input.toLowerCase() == "encounter")
//     {
//         return true;
//     };
//     return false;
// }

UserInterface::Command UserInterface::parseCommand(std::string input)
{

    if (input == "encounter")
    {
        return UserInterface::Command::ENCOUNTER;
    }
    return UserInterface::Command::INVALID;
};

TEST_CASE("Interface returns 0")
{
    UserInterface userInterface;
    CHECK(userInterface.Interface() == 0);
};

TEST_SUITE("UserInterface Parse Command")
{
    UserInterface userInterface;

    TEST_CASE("Defaults to returning INVALID")
    {
        CHECK(userInterface.parseCommand("Steve") == UserInterface::Command::INVALID);
    };

    TEST_CASE("Returns ENCOUNTER with correct input")
    {
        CHECK(userInterface.parseCommand("encounter") == UserInterface::Command::ENCOUNTER);
        CHECK(userInterface.parseCommand("Encounter") == UserInterface::Command::ENCOUNTER);
        CHECK(userInterface.parseCommand("ENCOUNTER") == UserInterface::Command::ENCOUNTER);
        CHECK(userInterface.parseCommand("enc") == UserInterface::Command::ENCOUNTER);
        CHECK(userInterface.parseCommand("Enc") == UserInterface::Command::ENCOUNTER);
        CHECK(userInterface.parseCommand("ENC") == UserInterface::Command::ENCOUNTER);
    };
};

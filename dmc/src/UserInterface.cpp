#include <iostream>
#include "doctest/doctest.h"
#include "dmc/UserInterface.hpp"

int UserInterface::Interface()
{
    std::cout << "Running Interface function" << std::endl;
    return 0;
};

bool isEncounter(onestring input)
{
    input.to_lower();
    if (input.equals("encounter"))
    {
        return true;
    };
    return false;
}

UserInterface::Command UserInterface::parseCommand(onestring input)
{
    if (isEncounter(input))
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

TEST_SUITE("UserInterface Parse Command" * doctest::skip(true))
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

TEST_SUITE("Is Encounter helper function")
{
    TEST_CASE("False for non matching strings")
    {
        CHECK(isEncounter("steve") == false);
        CHECK(isEncounter("something") == false);
    };

    TEST_CASE("True for complete matching strings")
    {
        CHECK(isEncounter("encounter") == true);
        CHECK(isEncounter("ENCOUNTER") == true);
        CHECK(isEncounter("EnCoUnTeR") == true);
    };
};

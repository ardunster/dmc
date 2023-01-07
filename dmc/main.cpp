#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT
#include "include/dependencies/doctest.h"
#include "include/dmc/UserInterface.hpp"

int main(int argc, char **argv)
{
    doctest::Context context;
    // TODO: Figure out how to default this to 'don't run tests' in production https://github.com/doctest/doctest/blob/master/doc/markdown/main.md
    context.applyCommandLine(argc, argv);

    int doctestResult = context.run();

    if (context.shouldExit())
    {
        return doctestResult;
    }

    std::cout << "Welcome to DMC!" << std::endl;

    UserInterface userInterface;

    int interfaceExitCode = userInterface.Interface();

    return doctestResult + interfaceExitCode;
};

TEST_CASE("Verifying tests run")
{
    CHECK(1 == 1);
    // CHECK(1 == 2);
}
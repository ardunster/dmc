#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT
#include "include/doctest.h"

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

    std::cout << "Hola" << std::endl;

    int client_stuff_return_code = 0;
    // your program - if the testing framework is integrated in your production code

    return doctestResult + client_stuff_return_code;
};

TEST_CASE("Verifying tests run")
{
    CHECK(1 == 1);
    // CHECK(1 == 2);
}
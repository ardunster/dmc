#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT
#include "include/doctest.h"

int main()
{
    doctest::Context context;

    int res = context.run();
    std::cout << "Hola" << std::endl;

    return 0;
};

TEST_CASE("Verifying tests run")
{
    CHECK(1 == 1);
    CHECK(1 == 2);
}
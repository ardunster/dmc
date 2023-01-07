#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

// Compile this file as the entry point of any code that needs to run tests
// but is not yet in the main executable.

TEST_SUITE("Sanity Check")
{
    TEST_CASE("Verifying Tests Run")
    {
        CHECK(1 == 1);
        CHECK(1 != 2);
    }
}

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Math.h"

TEST_CASE("test1")
{
    Math m;
    REQUIRE(m.add(1,2) == 3);
}

TEST_CASE("another test")
{
    REQUIRE (1 == 2);
}



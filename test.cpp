#define CATCH_CONFIG_MAIN

#include "catch.hpp"

extern std::vector<int> VectorPlusN(std::vector<int> v, int n);
extern std::vector<double> VectorTimesN(std::vector<double> v, double n);
 
// Comment

TEST_CASE("check function", "[multiplyn]")
{
    REQUIRE( VectorPlusN(std::vector<int>{1,2,3}, 1) == std::vector<int>{2,3,4});
}

TEST_CASE("check function2", "[addn]")
{
    REQUIRE( VectorTimesN(std::vector<double>{1,2,3}, 1) == std::vector<double>{1,2,3});
}
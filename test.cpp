
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "functions_to_implement.cpp"
TEST_CASE("Analyzing the summation fuction", "[sum]")
{
    //checking the summation
    std:: vector <int> sumv{13,5,6};
    std:: vector <int> sumvv{1,9,0};

    SECTION("summation of vector {13,5,6}")
    {
        REQUIRE(Sum(sumv) == 24);
    }
    SECTION("summation of vector {1,9,0}")
    {
        REQUIRE(Sum(sumvv) == 10);
    }
}

TEST_CASE("Checking OddMask", "[addN]")
{
    //this is a even vector
    std:: vector <int> oddv{2,6,8,10};
    //this is an odd vector
    std:: vector<int> oddv2{1,3,7,9};

    SECTION("This vector contains all even numbers")
    {
        std:: vector<bool>falsev = OddMask(oddv);
        REQUIRE(falsev.size() == oddv.size());

        for(int i =0; i < falsev.size(); i++)
        {
            REQUIRE(falsev[i] == 0);
        }
    }

    SECTION("This vector containing all odd numbers")
    {
        std:: vector<bool>truev = OddMask(oddv2);
        REQUIRE(truev.size() == oddv.size());

        for(int i =0; i < truev.size(); i++)
        {
            REQUIRE(truev[i] == 1);
        }
    }
}

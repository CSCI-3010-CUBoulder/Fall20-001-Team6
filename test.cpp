#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector> 

TEST_CASE ("Product is computed", "[product]"){
    std::vector <int> v{1, 2, 3, 4, 5}; 
    std::vector <int> v2{0, 0, 1}; 

    SECTION("check with vector [1, 2, 3, 4, 5]"){
        REQUIRE(Product(v) == 120);
    }
    
    SECTION("check with vector [0, 0, 1]"){
        REQUIRE(Product(v2) == 0);
    }
}

TEST_CASE("EvenMask works", "[evenMask]" ){
    std::vector <int> v{2, 4, 6, 8}; 
    std::vector <int> v2{1, 3, 5, 7};

    SECTION("check with all even numbers"){
        std::vector <bool> allTrue = EvenMask(v); 
        REQUIRE(allTrue.size() == v.size()); 
        for(int i = 0; i < allTrue.size(); i++){
            REQUIRE(allTrue[i] == 1); 
        }
    }

    SECTION("check with all odd numbers"){
        std::vector <bool> allFalse = EvenMask(v2); 
        REQUIRE(allFalse.size() == v2.size()); 
        for(int i = 0; i < allFalse.size(); i++){
            REQUIRE(allFalse[i] == 0); 
        }
    }
}
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here

//task B
TEST_CASE("Check Helper Function shiftChar on Uppercase Letters"){
    CHECK(shiftChar('A', 5) == 'F');
    CHECK(shiftChar('Y', 4) == 'C');
    CHECK(shiftChar('G', 1) == 'H');
    CHECK(shiftChar('Z', 10) == 'J');
}

TEST_CASE("Check Helper Function shiftChar on Lowercase Letters"){
    CHECK(shiftChar('c', 2) == 'e');
    CHECK(shiftChar('x', 8) == 'f');
    CHECK(shiftChar('z', 5) == 'e');
    CHECK(shiftChar('k', 16) == 'a');
}
TEST_CASE("Caesar Cipher Encryption"){
    CHECK(encryptCaesar("Hello there!", 5) == "Mjqqt ymjwj!");
    CHECK(encryptCaesar("checking symbols !?.,#", 2) == "ejgemkpi uaodqnu !?.,#");
    CHECK(encryptCaesar("i NeEd CoFfeE!!!", 9) == "r WnNm LxOonN!!!");
}







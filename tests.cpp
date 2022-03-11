#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

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

//task C
TEST_CASE("Vigenere Cipher Encryption using Lowercase Keys"){
    CHECK(encryptVigenere("Hello there!", "cake") == "Jevpq trite!");
    CHECK(encryptVigenere("The library closes at 7PM", "jedi") == "Clh trfuiac ftxwha jx 7SU");
    CHECK(encryptVigenere("the iced coffee is at the HOUSE.", "santa") == "lhr bcwd phfxer bs st gae ZOHLE.");
}

TEST_CASE("Vigenere Cipher Encryption using Uppercase Keys"){
    CHECK(encryptVigenere("Hello there!", "CAKE") == "Keyword must be lowercase!");
    CHECK(encryptVigenere("we will meet YoU in London", "fLOor") == "Keyword must be lowercase!");
    CHECK(encryptVigenere("the documents are ready.", "opeN") == "Keyword must be lowercase!");

}

//task D
TEST_CASE("Decrypt Caesar Cipher"){
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
    CHECK(decryptCaesar("Sla'z nv av aol tvcplz!", 7) == "Let's go to the movies!");
    CHECK(decryptCaesar("Hxd jan rwercnm cx cqn Lqarbcvjb Yjach! Bnn hxd cqnan!", 9) == "You are invited to the Christmas Party! See you there!");
    CHECK(decryptCaesar("Wkh SDFNDJH lv zdlwlqj iru brx rq wkh vhfrqg iorru...", 3) == "The PACKAGE is waiting for you on the second floor...");
}

TEST_CASE("Decrypt Vigenere Cipher"){
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
    CHECK(decryptVigenere("hi uphejem uip CwMFpx lvjpq", "bubbles") == "go towards the YeLLow arrow");
    CHECK(decryptVigenere("Pn qcwrnz ntrvh, jf wtwz ub uRtny-ce-uRplhwah.", "balloon") == "On friday night, we will go tRick-or-tReating.");
    CHECK(decryptVigenere("Jevpq, Wyvnd!", "CaKE") == "Keyword must be lowercase!");
}






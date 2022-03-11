#include <iostream>
#include <string>
#include <cctype>
#include "vigenere.h"
#include "funcs.h" //for shiftChar2

std::string encryptVigenere(std::string plaintext, std::string keyword){
std::string resultStr = "";

int key_index = 0; // index for the keyword
int text_index = 0; // index for the plaintext
int key_len = keyword.length();

for (int i = 0; i < plaintext.length(); i++){
    char c = plaintext[i];

    if (isupper(keyword[key_index]) == true){
            return "Keyword must be lowercase!";
            break;
        }

    //uppercase
    if (c >= 'A' && c <= 'Z'){
        int rshift = keyword[key_index] - 'a'; //lowercase keyword
        key_index = (key_index + 1) % key_len;
        char newChar = shiftChar2(plaintext[i], rshift); //get the encrypted letter using shiftChar function above
        resultStr += newChar;
        

    }
    //lowercase
    else if (c >= 'a' && c <= 'z'){
        int rshift = keyword[key_index] - 'a'; // ex: 'c' - 'a' = 2 because c is 2 shifts away from a
        key_index = (key_index + 1) % key_len;
        char newChar = shiftChar2(plaintext[i], rshift);
        resultStr += newChar;
        
    }

    else { //if it's not a letter, append the character itself
        resultStr += plaintext[i];
    }
    text_index = text_index + 1;

}
return resultStr;
}
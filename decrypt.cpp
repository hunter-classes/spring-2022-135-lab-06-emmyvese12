#include <iostream>
#include <cctype>
#include <string>
#include "funcs.h"
#include "decrypt.h"

std::string decryptCaesar(std::string ciphertext, int rshift){ // ==plaintext
    std::string resultStr = "";
    int size = ciphertext.length();

    for (int i = 0; i < size; i++){
        char c = ciphertext[i];
        char newChar; //this will hold the plain letter
        if (isalpha(c) == true){
            //if the character is a letter, call the shiftChar function to get it's plain letter

            newChar = shiftChar2(c, -rshift); //negative shift, going backwards
            resultStr += newChar;
            
        }
        else if (!isalpha(c)){ //if the letter is a white space or symbol 
            resultStr += c;
        }
    }

    return resultStr;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    //negative index when calling shiftChar2

    std::string resultStr = "";
    int size = ciphertext.length();
    int key_len = keyword.length();
    int key_index = 0;
    int text_index = 0;

    for (int i = 0; i < size; i++){
        char c = ciphertext[i];

        if (isupper(keyword[key_index]) == true){
            return "Keyword must be lowercase!";
            break;
        }

        if (isalpha(c) == true){
             int rshift = keyword[key_index] - 'a';
             rshift = -rshift; //shifting the other way to get to the plaintext
            key_index = (key_index + 1) % key_len;
             char newChar = shiftChar2(ciphertext[i], rshift);
             resultStr += newChar;
        }

       else { //if it's not a letter, append the character itself
        resultStr += ciphertext[i];
        }
    text_index = text_index + 1;

    }
return resultStr;
}



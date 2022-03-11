#include <string>
#include <iostream>
#include <cctype>
#include "caesar.h"

//helper function to shift one character by rshift

char shiftChar(char c, int rshift){
    for (int i = 1; i <= rshift; i++){
        if (isalpha(c) == true){ //check if the character is a letter first
            if (c == 'z' || c == 'Z'){
                if (c == 'z'){
                    c = 'a';
                
                }
                else if (c == 'Z'){
                    c = 'A';
                
                }
            }
            else {
            c = c + 1; //add 1 will shift the current letter to the next in the alphabet (ex: 'a' to 'b' or 'e' to 'f)
            }
        }
        else { // if the character is a white space or other symbols like ! . , it will stay itself since the shift doesn't affect it
            c = c;
        }

    }
    
    return c;

}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string resultStr = ""; //empty string
    for (int i = 0; i < plaintext.length(); i++){
        char c = plaintext[i];
        char newC = shiftChar(c, rshift);
        resultStr += newC;
    }

    return resultStr;
}

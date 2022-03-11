#include <iostream>
#include <cctype>
#include "funcs.h"

// add functions here

char shiftChar2(char c, int rshift){

    int alphaSize = 26;
    int convert;
    //uppercase letters ['A', 'Z']

    if (isalpha(c) == true){

        if (c >= 'A' && c <= 'Z'){
            //convert the letter to a ascii label
            convert = (c - int('A'));
            c = (convert + rshift + alphaSize) % alphaSize + int('A');

        }
        //lowercase letters ['a', 'z']
        if (c >= 'a' && c <= 'z'){
            //convert to label
            convert = (c - int('a'));
            c = (convert + rshift + alphaSize) % alphaSize + int('a');
        }
    }

    char result = char(c);
  return result;
}
/*
Emmy Veselinov
CSCI 135 Lab-06
Strings and Ciphers
*/

#include <iostream>
#include <string>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main(){

  //task B
  std::cout << "\n============Task B: Caesar cipher encryption============" << std::endl;
  std::string text1c = "Way to Go!";
  std::string result1c = encryptCaesar(text1c, 5);
  std::cout << text1c << " encrypted to: " << result1c;
  std::cout << "\n";

  std::string text2c = "Hello, World!";
  std::string result2c = encryptCaesar(text2c, 10);
  std::cout << text2c << " encrypted to: " << result2c;
  std::cout << "\n";


  //task C
  std::cout << "\n============Task C: Vigenere cipher encryption============" << std::endl;
  std::string text1v = "Hello, World!";
  std::string key1v = "cake";
  std::string result1v = encryptVigenere(text1v, key1v);
  std::cout << text1v << " encrypted to: " << result1v;
  std::cout << "\n";

  std::string text2v = "starts at two SHARP";
  std::string key2v = "spider";
  std::string result2v = encryptVigenere(text2v, key2v);
  std::cout << text2v << " encrypted to: " << result2v;
  std::cout << "\n";


  //task D
  std::cout << "\n============Task D: Decryption============";
  std::cout << "\n----Caesar Decryption----" << std::endl;
  std::string text1d = "Ifmmp tuvefout!!";
  std::string result1d = decryptCaesar(text1d, 1);
  std::cout << text1d << " decrypted to: " << result1d;
  std::cout << "\n";

  std::string text2d = "Qa bpqa bpm zqopb xtikm?";
  std::string result2d = decryptCaesar(text2d, 8);
  std::cout << text2d << " decrypted to: " << result2d;
  std::cout << "\n";

  std::cout << "\n----Vigenere Decryption----" << std::endl;

  std::string text3d = "Jevpq, Wyvnd!";
  std::string key1d = "cake";
  std::string result3d = decryptVigenere(text3d, key1d);
  std::cout << text3d << " decrypted to: " << result3d;
  std::cout << "\n";

  std::string text4d = "Uvb osuu depbb xwim pb ssifopfr lo Xros 1pu!";
  std::string key2d = "box";
  std::string result4d = decryptVigenere(text4d, key2d);
  std::cout << text4d << " decrypted to: " << result4d;
  std::cout << "\n";

  return 0;
}
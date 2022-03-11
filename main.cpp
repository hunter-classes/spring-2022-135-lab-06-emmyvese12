#include <iostream>
#include <string>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

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
  std::string key1 = "cake";
  std::string result1v = encryptVigenere(text1v, key1);
  std::cout << text1v << " encrypted to: " << result1v;
  std::cout << "\n";

  std::string text2v = "starts at two SHARP";
  std::string key2 = "spider";
  std::string result2v = encryptVigenere(text2v, key2);
  std::cout << text2v << " encrypted to: " << result2v;
  std::cout << "\n";
  return 0;
}
#include <iostream>
#include <string>
#include "funcs.h"
#include "caesar.h"

int main(){

  //task B
  std::cout << "\n============Task B: Caesar cipher encryption============" << std::endl;
  std::string text1 = "Way to Go!";
  std::string result1 = encryptCaesar(text1, 5);
  std::cout << text1 << " encrypted to: " << result1;
  std::cout << "\n";

  std::string text2 = "Hello, World!";
  std::string result2 = encryptCaesar(text2, 10);
  std::cout << text2 << " encrypted to: " << result2;
  std::cout << "\n";


  return 0;
}

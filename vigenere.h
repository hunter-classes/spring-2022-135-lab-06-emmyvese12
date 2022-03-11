#pragma once
#include <string>

char shiftChar2(char c, int rshift);

std::string encryptVigenere(std::string plaintext, std::string keyword);

std::string decryptVigenere(std::string ciphertext, std::string keyword);
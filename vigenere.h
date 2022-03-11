#pragma once
#include <string>

std::string encryptVigenere(std::string plaintext, std::string keyword);

std::string decryptVigenere(std::string ciphertext, std::string keyword);

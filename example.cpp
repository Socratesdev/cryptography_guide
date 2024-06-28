#include <iostream>
#include "alphabet.h"

int main() {
    std::cout << "Lowercase alphabet: ";
    for (char letter : lowercase) {
        std::cout << letter << ' ';
    }
    std::cout << std::endl;

    std::cout << "Uppercase alphabet: ";
    for (char letter : uppercase) {
        std::cout << letter << ' ';
    }
    std::cout << std::endl;

    return 0;
}


#include "../include/string_hash.hpp"

#include <iostream>

int main() {
    std::cout << "Enter the string 'Hello, World!': ";
    std::string input;
    getline(std::cin, input);

    std::cout << "We will now switch on the string hash of the input string." << std::endl;

    switch (strhs::Hash(input.c_str())) {
        case strhs::Hash("Hello, World!"):
            std::cout << "The input string is 'Hello, World!', the switch statement works!" << std::endl;
            break;
        default:
            std::cout << "The input string is not 'Hello, World!', the switch statement does not work!" << std::endl;
            break;
    }
    return 0;
}
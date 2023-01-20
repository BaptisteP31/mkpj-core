// This is a simple example of how to use the userinputs library.

#include "../include/userinputs.hpp"

#include <iostream>

int main() {
    std::string input;
    userinputs::get_user_input("Enter a string", input);
    std::cout << "You entered: " << input << std::endl;

    int input_int;
    userinputs::get_user_input("Enter an integer", input_int);
    std::cout << "You entered: " << input_int << std::endl;

    char input_char[100];
    userinputs::get_user_input("Enter a string", input_char, 100);
    std::cout << "You entered: " << input_char << std::endl;

    return 0;
}
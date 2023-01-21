#include "../include/loading_bar.hpp"

#include <iostream>
#include <thread>
#include <chrono>

int main() {
    std::cout << "Loading..." << std::endl;
    // hide terminal cursor
    std::cout << "\033[?25l";

    // This is the default loading bar
    for (int i = 0; i <= 100; ++i) {
        std::cout << ldb::loading_bar(i);
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    // clear terminal line
    std::cout << "\033[2K";

    // The loading bar supports unicode characters
    for (int i = 0; i <= 100; ++i) {
        std::cout << ldb::loading_bar(i, 50, "🔵", "🔵", "⚪️");
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    // clear terminal line
    std::cout << "\033[2K";

    for (int i = 0; i <= 100; ++i) {
        std::cout << ldb::loading_bar(i, 50, "#", ">");
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    // Instead of clearing the line, you can also use std::endl to move to the next line
    std::cout << std::endl;

    // show terminal cursor
    std::cout << "\033[?25h";
    std::cout << std::endl;
}
#include "../include/userinputs.hpp"
#include <iostream>

namespace userinputs {

    // Non-ranged input

    void get_user_input(std::string msg, char* input, int input_size) {
        std::cout << msg << "> " << std::flush;
        std::cin.getline(input, input_size);
    }

    void get_user_input(std::string msg, std::string& input) {
        std::cout << msg << "> " << std::flush;
        std::getline(std::cin, input);
    }

    void get_user_input(std::string msg, int& input, std::string error_msg) {
        std::cout << msg << "> " << std::flush;
        std::string input_string;
        std::getline(std::cin, input_string);

        try {
            input = std::stoi(input_string);
        } catch (std::exception& e) {
            std::cerr << error_msg << std::endl;
            get_user_input(msg, input);
        }
    }

    void get_user_input(std::string msg, float& input, std::string error_msg) {
        std::cout << msg << "> " << std::flush;
        std::string input_string;
        std::getline(std::cin, input_string);

        try {
            input = std::stof(input_string);
        } catch (std::exception& e) {
            std::cerr << error_msg << std::endl;
            get_user_input(msg, input);
        }
    }

    void get_user_input(std::string msg, double& input, std::string error_msg) {
        std::cout << msg << "> " << std::flush;
        std::string input_string;
        std::getline(std::cin, input_string);

        try {
            input = std::stod(input_string);
        } catch (std::exception& e) {
            std::cerr << error_msg << std::endl;
            get_user_input(msg, input);
        }
    }

    void get_user_input(std::string msg, long& input, std::string error_msg) {
        std::cout << msg << "> " << std::flush;
        std::string input_string;
        std::getline(std::cin, input_string);

        try {
            input = std::stol(input_string);
        } catch (std::exception& e) {
            std::cerr << error_msg << std::endl;
            get_user_input(msg, input);
        }
    }

    void get_user_input(std::string msg, size_t& input, std::string error_msg) {
        std::cout << msg << "> " << std::flush;
        std::string input_string;
        std::getline(std::cin, input_string);

        try {
            input = std::stoul(input_string);
        } catch (std::exception& e) {
            std::cerr << error_msg << std::endl;
            get_user_input(msg, input);
        }

    }

    // Ranged input

    void get_ranged_user_input(std::string msg, int& input, int min, int max, std::string error_msg) {
        get_user_input(msg, input, error_msg);
        if (input < min || input > max) {
            std::cerr << error_msg << std::endl;
            get_ranged_user_input(msg, input, min, max);
        }
    }

    void get_ranged_user_input(std::string msg, float& input, float min, float max, std::string error_msg) {
        get_user_input(msg, input, error_msg);
        if (input < min || input > max) {
            std::cerr << error_msg << std::endl;
            get_ranged_user_input(msg, input, min, max);
        }
    }

    void get_ranged_user_input(std::string msg, double& input, double min, double max, std::string error_msg) {
        get_user_input(msg, input, error_msg);
        if (input < min || input > max) {
            std::cerr << error_msg << std::endl;
            get_ranged_user_input(msg, input, min, max);
        }
    }

    void get_ranged_user_input(std::string msg, long& input, long min, long max, std::string error_msg) {
        get_user_input(msg, input, error_msg);
        if (input < min || input > max) {
            std::cerr << error_msg << std::endl;
            get_ranged_user_input(msg, input, min, max);
        }
    }

    void get_ranged_user_input(std::string msg, size_t& input, size_t min, size_t max, std::string error_msg) {
        get_user_input(msg, input, error_msg);
        if (input < min || input > max) {
            std::cerr << error_msg << std::endl;
            get_ranged_user_input(msg, input, min, max);
        }
    }

}

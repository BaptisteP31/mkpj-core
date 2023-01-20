#pragma once
#ifndef USERINPUTS_HPP
#define USERINPUTS_HPP

#include <string>

namespace userinputs {

    #define DEFAULT_ERROR_MESSAGE "Invalid input. Please enter a number."
    #define DEFAULT_RANGE_ERROR_MESSAGE "Invalid input. Please enter a number contained within the range."

    void get_user_input(std::string msg, char* input, int input_size);
    void get_user_input(std::string msg, std::string& input);
    void get_user_input(std::string msg, int& input, const std::string error_msg = DEFAULT_ERROR_MESSAGE);
    void get_user_input(std::string msg, float& input, const std::string error_msg = DEFAULT_ERROR_MESSAGE);
    void get_user_input(std::string msg, double& input, const std::string error_msg = DEFAULT_ERROR_MESSAGE);
    void get_user_input(std::string msg, long& input, const std::string error_msg = DEFAULT_ERROR_MESSAGE);
    void get_user_input(std::string msg, size_t& input, const std::string error_msg = DEFAULT_ERROR_MESSAGE);

    void get_ranged_user_input(std::string msg, int& input, int min, int max, const std::string error_msg = DEFAULT_RANGE_ERROR_MESSAGE);
    void get_ranged_user_input(std::string msg, float& input, float min, float max, const std::string error_msg = DEFAULT_RANGE_ERROR_MESSAGE);
    void get_ranged_user_input(std::string msg, double& input, double min, double max, const std::string error_msg = DEFAULT_RANGE_ERROR_MESSAGE);
    void get_ranged_user_input(std::string msg, long& input, long min, long max, const std::string error_msg = DEFAULT_RANGE_ERROR_MESSAGE);
    void get_ranged_user_input(std::string msg, size_t& input, size_t min, size_t max, const std::string error_msg = DEFAULT_RANGE_ERROR_MESSAGE);

}

#endif
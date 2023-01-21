#pragma once
#ifndef LOADING_BAR_HPP
#define LOADING_BAR_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

namespace ldb {
    // bar width of 80 characters, starts with [ and ends with ] , # is the loading bar, > is the cursor, and space is the empty space
    std::string loading_bar(int percentage, const int bar_width = 80, const std::string fill = "#", const std::string cursor = ">", const std::string empty = " ", const std::string start = "[", const std::string end = "]");
}

#endif
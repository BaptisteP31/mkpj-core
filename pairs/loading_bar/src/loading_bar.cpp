#include "../include/loading_bar.hpp"

// bar width of 80 characters, starts with [ and ends with ] , # is the loading bar, > is the cursor, and space is the empty space
std::string ldb::loading_bar(int percentage, const int bar_width, const std::string fill, const std::string cursor, const std::string empty, const std::string start, const std::string end) {
    std::stringstream ss;
    ss << start;
    int fill_width = (bar_width - 2) * percentage / 100;
    for (int i = 0; i < fill_width; ++i) {
        ss << fill;
    }
    ss << cursor;
    for (int i = fill_width + 1; i < bar_width - 1; ++i) {
        ss << empty;
    }
    ss << end << ' ' << std::setw(3) << percentage << '%' << '\r';
    return ss.str();
}
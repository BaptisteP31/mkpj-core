#pragma once
#ifndef ANSI_COLORS_HPP
#define ANSI_COLORS_HPP

#define WINDOWS_DISABLE_ANSI_COLORS = true

#if (defined(_WIN32) || defined(_WIN64)) && defined(WINDOWS_DISABLE_ANSI_COLORS)
    #define ANSI_COLOR_RED ""
    #define ANSI_COLOR_GREEN ""
    #define ANSI_COLOR_YELLOW ""
    #define ANSI_COLOR_BLUE ""
    #define ANSI_COLOR_MAGENTA ""
    #define ANSI_COLOR_CYAN ""
    #define ANSI_COLOR_WHITE ""
    #define ANSI_COLOR_BLACK ""
    #define ANSI_COLOR_BRIGHT_RED ""
    #define ANSI_COLOR_BRIGHT_GREEN ""
    #define ANSI_COLOR_BRIGHT_YELLOW ""
    #define ANSI_COLOR_BRIGHT_BLUE ""
    #define ANSI_COLOR_BRIGHT_MAGENTA ""
    #define ANSI_COLOR_BRIGHT_CYAN ""
    #define ANSI_COLOR_RESET ""
#else
    #define ANSI_COLOR_RED "\x1b[31m"
    #define ANSI_COLOR_GREEN "\x1b[32m"
    #define ANSI_COLOR_YELLOW "\x1b[33m"
    #define ANSI_COLOR_BLUE "\x1b[34m"
    #define ANSI_COLOR_MAGENTA "\x1b[35m"
    #define ANSI_COLOR_CYAN "\x1b[36m"
    #define ANSI_COLOR_WHITE "\x1b[37m"
    #define ANSI_COLOR_BLACK "\x1b[30m"
    #define ANSI_COLOR_BRIGHT_RED "\x1b[91m"
    #define ANSI_COLOR_BRIGHT_GREEN "\x1b[92m"
    #define ANSI_COLOR_BRIGHT_YELLOW "\x1b[93m"
    #define ANSI_COLOR_BRIGHT_BLUE "\x1b[94m"
    #define ANSI_COLOR_BRIGHT_MAGENTA "\x1b[95m"
    #define ANSI_COLOR_BRIGHT_CYAN "\x1b[96m"
    #define ANSI_COLOR_RESET "\x1b[0m"
#endif

#endif
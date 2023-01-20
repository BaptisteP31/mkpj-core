#pragma once
#ifndef ANSI_TERMINAL_UTILS_HPP
#define ANSI_TERMINAL_UTILS_HPP

#define WINDOWS_DISABLE_TERMINAL_UTILS = true
#if (defined(_WIN32) || defined(_WIN64)) && defined(WINDOWS_DISABLE_TERMINAL_UTILS)
    #define CLEAR_SCREEN ""
    #define CURSOR_UP ""
    #define CURSOR_DOWN ""
    #define CURSOR_FORWARD ""
    #define CURSOR_BACK ""
    #define CURSOR_SAVE_POSITION ""
    #define CURSOR_RESTORE_POSITION ""
    #define CURSOR_HIDE ""
    #define CURSOR_SHOW ""
#else
    #define CLEAR_SCREEN "\x1b[2J\x1b[1;1H"
    #define CURSOR_UP "\x1b[1A"
    #define CURSOR_DOWN "\x1b[1B"
    #define CURSOR_FORWARD "\x1b[1C"
    #define CURSOR_BACK "\x1b[1D"
    #define CURSOR_SAVE_POSITION "\x1b[s"
    #define CURSOR_RESTORE_POSITION "\x1b[u"
    #define CURSOR_HIDE "\x1b[?25l"
    #define CURSOR_SHOW "\x1b[?25h"
#endif

#endif
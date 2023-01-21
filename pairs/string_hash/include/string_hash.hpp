#pragma once
#ifndef STRING_HASH_HPP
#define STRING_HASH_HPP

namespace strhs {
    // Hash function for strings, implementation of Daniel J. Bernstein's algorithm (http://www.cse.yorku.ca/~oz/hash.html)
    template <typename _T>
    unsigned int constexpr Hash(_T const* input) {
        return *input ? static_cast<unsigned int>(*input) + 33 * Hash(input + 1) : 5381;
    }
}


#endif // STRING_HASH_HPP
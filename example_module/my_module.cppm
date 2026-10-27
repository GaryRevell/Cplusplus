//
// Created by garyr on 19/09/2026.
//

module;                      // global module fragment: put #includes here

#include <algorithm>
#include <cctype>
#include <cmath>
#include <string>
#include <vector>

export module my_module;

//
// Private and public data
//
std::vector<int> private_vector {};
export std::vector<int> public_vector {5,4,3,2,1};

//
// Count the number of letters and digits in a string
//
export long long countLettersAndDigits(std::string input) {
    return std::ranges::count_if(input, [](const unsigned char c) { return std::isalnum(c);});
}

//
// Return whether the target string ends with the ending string
//
export bool ends_with_string(std::string const &str, std::string const &ending) {
    return str.ends_with(ending);
}

//
// You are given a string representing a number in binary. Your task is to delete all the unset bits in this
// string and return the corresponding number (after keeping only the '1's).
//
export long long eliminate_unset_bits(const std::string& number) {
    return static_cast<long long>(std::pow(2,std::ranges::count(number, '1' ))) - 1;
}

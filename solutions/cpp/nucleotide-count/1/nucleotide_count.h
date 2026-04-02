#pragma once
#include <string>
#include <map>
#include <stdexcept>

namespace nucleotide_count {

    std::map<char, int> count(std::string text);
    
}  // namespace nucleotide_count

#include "nucleotide_count.h"

namespace nucleotide_count {
    std::map<char, int> count(std::string text ) {
        std::map<char, int> result{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};
        for ( auto chr : text ){
            auto it = result.find(chr);
            if ( it != result.end())
                it->second++;
            else
                throw std::invalid_argument("Nucleotide not found: "+chr );
        }
        return result;
    }
}  // namespace nucleotide_count

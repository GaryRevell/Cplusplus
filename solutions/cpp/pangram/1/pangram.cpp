#include "pangram.h"

namespace pangram {

    bool is_pangram(const std::string& phrase) {
        std::set<char> letters {};
        for ( auto chr : phrase ) {
            if ( isalpha(chr) )
                letters.insert(std::tolower(chr));
        }
        return letters.size() == 26;
    }

}  // namespace pangram

#include "scrabble_score.h"

namespace scrabble_score {

    int letter_value(char c) {
        static constexpr int table[26] = { 1,3,3,2,1,4,2,4,1,8,5,1,3,
                                           1,1,3,10,1,1,1,1,4,4,8,4,10 };

        if (!std::isalpha(static_cast<unsigned char>(c)))
            return 0;

        c = std::toupper(static_cast<unsigned char>(c));
        return table[c - 'A'];
    }
    
    int score(const std::string& word ){
        int result {};
        for ( unsigned char chr : word )
            result += letter_value(chr);
        
        return result;
    }

}  // namespace scrabble_score

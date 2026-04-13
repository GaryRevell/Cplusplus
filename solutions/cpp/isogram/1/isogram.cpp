#include "isogram.h"
#include <unordered_set>
#include <cctype>

namespace isogram {

    bool is_isogram(const std::string_view word){
        int count {};
        std::unordered_set<char> letters {};
        
        for ( auto c : word ){
            if (c == ' ' || c == '-' )
                count++;
            else {
                c = tolower(c);
                if ( isalpha(c) ){
                auto pair = letters.insert(c);
                if ( !pair.second )
                    break;
                }
            }
        }
        return (word.size() - count ) == letters.size();
    }

}  // namespace isogram

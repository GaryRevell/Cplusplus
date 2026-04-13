#include "isogram.h"
#include <unordered_set>
#include <cctype>

namespace isogram {

    bool is_isogram(const std::string_view word){
        int count {};
        std::unordered_set<char> letters {};
        
        for ( unsigned char c : word ){
            if (c == ' ' || c == '-' )
                count++;
            else {
                if ( isalpha(c) ){
                    c = tolower(c);
                    auto pair = letters.insert(c);
                    if ( !pair.second )
                        return false;
                }
            }
        }
        return (word.size() - count ) == letters.size();
    }

}  // namespace isogram

//
// Created by garyr on 09/04/2026.
//

//#include "atbash_cipher.hpp"
#include "atbash_cipher.h"

#include <cctype>
#include <string>

namespace atbash_cipher {

    std::string encode(const std::string& text) {
        std::string cipher {};
        int count {0};

        for(auto c : text) {
            if(isalpha(c)) {
                c = std::tolower(c);
                c = 'z' - (c - 'a');
            }
            else if (!isdigit(c))
                    continue;

            cipher += c;
            count++;
            if(count == 5) {
                cipher += ' ';
                count = 0;
            }
        }
        if(cipher.back() == ' ') 
            cipher.pop_back();
        
        return cipher;
    }

    std::string decode(const std::string& cipher ) {
        std::string text {};
        for(auto c : cipher ) {
            if(isalpha(c)) {
                c = std::tolower(c);
                c = 'z' - (c - 'a');
                text += c;
            }
            else if(isdigit(c))
                text += c;
        }
        return text;
    }
}  // namespace atbash_cipher


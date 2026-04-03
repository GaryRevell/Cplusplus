#include "trinary.h"
#include <iostream>

namespace trinary {

    int to_decimal(std::string number ){
        int result = 0;
    
        for (unsigned char c : number) {
            if (!std::isdigit(c))
                return 0;
            result = result * 3 + (c - '0');
        }
        return result;
    }

}  // namespace trinary

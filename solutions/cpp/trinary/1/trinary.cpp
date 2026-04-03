#include "trinary.h"
#include <iostream>
#include <cmath>

namespace trinary {

    int to_decimal(std::string number ){
        int power {} , sum {};
        for (std::string::reverse_iterator rit=number.rbegin(); rit!=number.rend(); ++rit ){
            if ( isdigit(*rit) )
                sum = sum + (*rit - '0') * std::pow(3,power++);
            else
                return 0;
        }
        return sum;
    }

}  // namespace trinary

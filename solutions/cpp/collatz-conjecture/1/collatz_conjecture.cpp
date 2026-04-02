#include "collatz_conjecture.h"

namespace collatz_conjecture {

    int steps(const int number ){
        if ( number < 1 )
            throw std::domain_error("Invalid value, must be >=1");

        int steps {}, value {number};
        // Rules:  If it's even, divide it by 2.
        //         If it's odd, multiply it by 3 and add 1.
        while ( value != 1 ) {
            if ( value & 1 ) 
                value = value * 3 + 1;
            else
                value /= 2;
            steps++;
        }
        return steps;
    }
    

}  // namespace collatz_conjecture

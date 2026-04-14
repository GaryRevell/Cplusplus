#include "prime_factors.h"

namespace prime_factors {

std::vector<long long> of( long number ){
    std::vector<long long> result {};
    long long factor {2};

    while ( number ){
        if ( number % factor == 0){
            result.push_back(factor);
            number /= factor;
        }
        else {
            if ( factor > number )
                break;

            factor++;
        }
    }
    return result;
}

}  // namespace prime_factors

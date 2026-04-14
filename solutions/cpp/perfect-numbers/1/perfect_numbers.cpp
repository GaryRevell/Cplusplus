#include "perfect_numbers.h"
#include <stdexcept>

namespace perfect_numbers {

    classification classify( const int number ){
        classification result {perfect};
        if ( number <= 0 )
            throw std::domain_error(" Number must be > 0");

        int factor_sum {} , max_factor {number/2};
        for ( int nums {1} ; nums <= max_factor ; nums++ )
            if ( number % nums == 0)
                factor_sum += nums;
        
        if ( number < factor_sum )
            result = abundant;
        else if ( number > factor_sum )
            result = deficient;
        
        return result;
    }

    
}  // namespace perfect_numbers

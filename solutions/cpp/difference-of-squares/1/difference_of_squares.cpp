#include "difference_of_squares.h"

namespace difference_of_squares {
    // Naive looping solutions.
    int square_of_sum(const int number ){ 
        int sum {};
        for ( int i{1} ; i <= number ; i++ ) 
            sum+= i;
        return sum*sum;
    }
    
    int sum_of_squares(const int number ){ 
        int sum {};
        for ( int i{1} ; i <= number ; i++ ) 
            sum+= i*i;
        return sum;
    }
    
    int difference(const int number ){ 
        return square_of_sum(number) - sum_of_squares(number);
    }
    
}  // namespace difference_of_squares

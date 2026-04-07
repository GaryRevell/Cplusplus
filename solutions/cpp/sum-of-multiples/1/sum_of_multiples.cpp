#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(const std::initializer_list<int> divisors , const int level ) {
        std::set<int> number_set {};
        int sum {};
        for (const auto num : divisors )
            for ( int i = num ; i < level ; i += num ){
                if ( number_set.find(i) == number_set.end()) { 
                    number_set.emplace(i);
                    sum += i;
                }
            }
        return sum;
    }

}  // namespace sum_of_multiples

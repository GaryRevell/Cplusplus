#include "sum_of_multiples.h"

namespace sum_of_multiples {

    int to(const std::initializer_list<int> divisors , const int level ) {
        std::unordered_set<int> number_set {};
        int sum {};
        for (const auto num : divisors )
            for ( int i {num} ; i < level ; i += num ) {
                auto addit  = number_set.emplace(i);
                if ( addit.second )
                    sum += i;
            }
        return sum;
    }

}  // namespace sum_of_multiples

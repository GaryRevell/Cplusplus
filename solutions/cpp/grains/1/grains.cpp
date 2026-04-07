#include "grains.h"

namespace grains {

    unsigned long long square(const int number){

        return pow(2, number-1 );
    }

    unsigned long long total(){
        unsigned long long sum {1};
        for ( int i {0} ; i < 64 ; i++ )
            sum += sum;
        
        return sum+sum-1;
    }

}  // namespace grains

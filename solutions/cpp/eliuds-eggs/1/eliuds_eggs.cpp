#include "eliuds_eggs.h"

namespace chicken_coop {

    int positions_to_quantity(int bitmask ){
        int eggs {};
        while ( bitmask ){
            if ( bitmask & 1)
                eggs++;
            bitmask >>= 1;
        }
        return eggs;
    }
    
}  // namespace chicken_coop

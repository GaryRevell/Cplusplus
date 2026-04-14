#include "eliuds_eggs.h"

namespace chicken_coop {

    int positions_to_quantity(int bitmask ){
        return __builtin_popcount(bitmask);
    }
    
}  // namespace chicken_coop

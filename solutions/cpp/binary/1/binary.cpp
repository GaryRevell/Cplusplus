#include "binary.h"

namespace binary {

    int convert(std::string number){
        int power_of_2 {1}, sum {0};
        number = std::string(number.rbegin(), number.rend());
        
        for ( char c : number ) {
            if ( c == '1' )
                sum += power_of_2;
            else if ( c != '0')
                    return 0;
            
            power_of_2 <<= 1;     // += power_of_2;
        }
        return sum;
    }

}  // namespace binary

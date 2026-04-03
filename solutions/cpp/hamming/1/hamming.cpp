#include "hamming.h"

namespace hamming {

    int compute( const std::string& strand1 , const std::string& strand2 ) {
        if ( strand1.size() != strand2.size() )
            throw std::domain_error("DNA strands must be the same length");
        int count {};
        for ( size_t i = 0 ; i < strand1.size() ; i++ ) 
            count += ( strand1[i] != strand2[i] );
        
        return count;
    }
    

}  // namespace hamming

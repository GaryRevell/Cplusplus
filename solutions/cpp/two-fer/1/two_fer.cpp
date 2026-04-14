#include "two_fer.h"

namespace two_fer {

    std::string two_fer(const std::string name ){
        return "One for "+(name==""?"you":name)+", one for me.";
    } 
    std::string two_fer(){
        return two_fer("");
    } 
    
}  // namespace two_fer

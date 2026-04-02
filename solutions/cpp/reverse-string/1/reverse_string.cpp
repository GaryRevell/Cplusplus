#include <algorithm>
#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string text ){
        std::reverse(text.begin(), text.end());
        return text;
    }
}  // namespace reverse_string

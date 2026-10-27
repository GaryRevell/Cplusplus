#include <cassert>
#include <print>

import my_module;

//
// Run some tests on the functions exposed in my_module
//
int main() {
    std::println("Module test harness starting...");
    assert(countLettersAndDigits("n!!ic_e!!123") == 7 );
    assert(countLettersAndDigits("Q1..w2E_;)3R-4t!!5y6<<") == 12 );
    assert(countLettersAndDigits("..123..qaz++datA!!str1nG") == 16 );

    assert(ends_with_string("qwertyuiop","iop") == true );
    assert(ends_with_string("This is quite a long string for this test","test.") == false );

    assert(eliminate_unset_bits("11010101010101") == 255 );
    assert(eliminate_unset_bits("111") == 7);
    assert(eliminate_unset_bits("1000000") == 1 );
    assert(eliminate_unset_bits("000000") == 0 );

    // Show that we can access the exported data from the module.
    for ( auto v : public_vector)
        std::println("{}" , v);

    std::println("Module test harness completed successfully!");
    return 0;
}

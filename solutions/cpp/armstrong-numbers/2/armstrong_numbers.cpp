#include "armstrong_numbers.h"

namespace armstrong_numbers {

    std::vector<int> num_digits(int n) {
        n = std::abs(n);
        std::vector<int> digits{};
        do {
            digits.insert(digits.begin(), n % 10);
            n /= 10;
        } while (n);
        return digits;
    }
    
    int local_pow(const int base, const int exponent) {
        int result {1};
        for (int i{}; i < exponent; ++i)
            result *= base;
        return result;
    }
    
    bool is_armstrong_number(const int number) {
        const std::vector<int> the_digits {num_digits(number)};
        const int num_digits {static_cast<int>(the_digits.size())};
        int sum_of_digits{};
    
        for (const auto num: the_digits)
            sum_of_digits += local_pow(num, num_digits);
    
        return number == sum_of_digits;
    }

}  // namespace armstrong_numbers

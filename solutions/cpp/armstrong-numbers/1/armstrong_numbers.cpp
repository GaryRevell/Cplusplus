#include "armstrong_numbers.h"

namespace armstrong_numbers {

    std::vector<int> digits;
    
    int number_of_digits(int n) {
        int count = 0;
        n = std::abs(n);
        digits.clear();
        do {
            digits.insert(digits.begin(), n % 10);
            count++;
            n /= 10;
        } while (n);

        return count;
    }
    
    int local_pow(const int base, const int exponent) {
        int result = 1;
        for (int i = 0; i < exponent; ++i)
            result *= base;
        return result;
    }

    bool is_armstrong_number(const int number) {
        const int num_digits = number_of_digits(number);
        int sum_of_digits{};

        for (const auto num: digits) {
            const int value = local_pow(num, num_digits);
            sum_of_digits = sum_of_digits + value;
        }
        return number == sum_of_digits;
    }

}  // namespace armstrong_numbers

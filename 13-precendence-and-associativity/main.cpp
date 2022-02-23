#include <iostream>

int main()
{
    // precedence : which operation to do first
    // associativity : which direction or which order(e.g mathematic operations works left to right)

    // Basic operation order : multiplication / division / modulus -> addition / subtraction
    int result = 6 + 3 * 8 - 9 / 3 - 2 + 5; // 6 + 24 - 3 - 2 + 5
    // result will be 30
    int result_cleaner = 6 + (3 * 8) - (9 / 3) - 2 + 5; // This way also possible

    std::cout << result << std::endl;

    return 0;
}

// [c++ precedence table](https://en.cppreference.com/w/cpp/language/operator_precedence)
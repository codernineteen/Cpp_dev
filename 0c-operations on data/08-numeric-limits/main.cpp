#include <iostream>
// a library needed
#include <limits>

int main()
{
    // numeric limits represent the limitation of number like min, max, lowest according to number type
    std::cout << "short :" << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "unsigned short :" << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "unsigned integer :" << std::numeric_limits<unsigned>::min() << " to " << std::numeric_limits<unsigned>::max() << std::endl;
    std::cout << "sigend :" << std::numeric_limits<signed>::min() << " to " << std::numeric_limits<signed>::max() << std::endl;
    std::cout << "int :" << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "float :" << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "long :" << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "double :" << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "long double :" << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;

    // other functions
    std::cout << "Is long double signed? :" << std::numeric_limits<long double>::is_signed << std::endl;
    std::cout << "Digits of long double :" << std::numeric_limits<long double>::digits << std::endl;

    // [numeric_limits reference](https://en.cppreference.com/w/cpp/types/numeric_limits)
    return 0;
}
#include <iostream>
// need this library
#include <cmath>

int main()
{
    float f1 = 1.1234560f;
    int neg1 = -4;
    int pos1 = 4;

    // std::floor(x) - round down of x
    std::cout << std::floor(f1) << std::endl;

    // std::ceil(x) - round up of x
    std::cout << std::ceil(f1) << std::endl;

    // std::round(x) - benchmark is .5
    std::cout << std::round(f1) << std::endl;

    // std::abs(x) - absolute value of x
    std::cout << std::abs(neg1) << std::endl;

    // std::exp(x), where e = 2.71828... , e^x
    std::cout << std::exp(pos1) << std::endl;

    // std::pow(x,y) - x is base, y is indices
    std::cout << "-4^4 : " << std::pow(neg1, pos1) << std::endl;

    // std::log() - reverse function of pow : what indices(x) needed to get a value(b) with given base(a) -> a^x = b => loga^b = x
    std::cout << std::log10(10000) << std::endl;

    // std::sqrt(x) - square root of x
    std::cout << std::sqrt(pos1) << std::endl;
    return 0;
}

// [more math functions](https://en.cppreference.com/w/cpp/header/cmath)
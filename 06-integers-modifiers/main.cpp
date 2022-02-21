#include <iostream>

int main()
{
    // integer is signed which can have negative value by default
    // Regardless of whether signed or unsigned, integers takes 4 bytes memory
    // unsigned integer have range of [0..2^n - 1]
    // signed intger have range of [2^(n-1)..2^(n-1)-1]
    // Two types of integer have same range
    int pos_value = 10;  // signed
    int neg_value = -10; // signed
    // or
    signed int pos_value1 = 10;
    signed int neg_value1 = -10;

    unsigned int pos_only = 100;
    std::cout << sizeof(pos_value1) << std::endl;
    std::cout << sizeof(pos_only) << std::endl;
    // unsigned int pos_only1 = -100; <-- compile error

    // There is also additional modifier of size of integer (short and long)
    // short limit your integer as 2 bytes size
    // long expang your integer til 8bytes

    // Signed by default, can use unsigned modifier
    short int short_val = 30000;         // 2 bytes , can hold value between [0..2^16-1]
    long int long_val = 30000;           // 4 or 8 bytes according to actual size of variable
    long long int very_long_val = 30000; // fixed  8 bytes
    std::cout << sizeof(short_val) << std::endl;
    std::cout << sizeof(long_val) << std::endl;
    std::cout << sizeof(very_long_val) << std::endl;

    return 0;
}
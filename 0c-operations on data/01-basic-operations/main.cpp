#include <iostream>

int main()
{
    int num1 = 1;
    int num2 = 2;
    // addition
    int num_add = num1 + num2;

    // subtraction
    int num_sub = num2 - num1;

    // division
    int num_div = num1 / num2;

    // multiplication
    int num_mul = num1 * num2;

    // modulus
    int num_mod = num1 % num2;

    std::cout << num_add << std::endl;
    std::cout << num_sub << std::endl;
    std::cout << num_div << std::endl;
    std::cout << num_mul << std::endl;
    std::cout << num_mod << std::endl;

    return 0;
}

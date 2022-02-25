#include <iostream>

int main()
{
    int value = 5;
    // This is kind of shorcut which combine operations with assigning value to variable
    value += 5; // value : 10
    std::cout << value << std::endl;
    value -= 5; // value : 5
    std::cout << value << std::endl;
    value *= 2; // value : 10
    std::cout << value << std::endl;
    value /= 2; // value : 5
    std::cout << value << std::endl;
    value %= 2; // value : 1
    std::cout << value << std::endl;
    return 0;
}
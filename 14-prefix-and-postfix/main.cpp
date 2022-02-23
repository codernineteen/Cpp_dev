#include <iostream>

int main()
{
    int value = 1;
    // increment or decrement with postfix
    std::cout << value++ << std::endl; // 1
    std::cout << value << std::endl;   // 2 because it is incremented when the last statement ended
    std::cout << value-- << std::endl; // 2
    std::cout << value << std::endl;   // 1 (same reason)

    std::cout << "-------------" << std::endl;
    // increment or decrement with prefix
    std::cout << ++value << std::endl; // 2 because operation works right away
    std::cout << value << std::endl;   // 2
    std::cout << --value << std::endl; // 1
    std::cout << value << std::endl;   // 1

    // there is no postfix or prefix like **, //
    return 0;
}
#include <iostream>

int main()
{
    // bool print out 0 or 1
    bool t = true;
    bool f = false;

    std::cout << t << std::endl;
    std::cout << f << std::endl;

    // boolean takes up 1 byte memory
    std::cout << sizeof(bool) << std::endl;

    // you can force print format with boolalpha
    std::cout << std::boolalpha;
    std::cout << t << std::endl;
    std::cout << f << std::endl;

    return 0;
}
#include <iostream>

int main()
{
    bool t1 = true;
    bool t2 = true;
    bool f1 = false;
    bool f2 = false;

    // Logical operators are (and, or, not)
    // 1. and
    bool r1 = t1 && t2; // true (both true)
    bool r2 = t1 && f1; // false (one true , one false)
    bool r3 = f1 && f2; // false (both false)
    std::cout << std::boolalpha;
    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;
    std::cout << r3 << std::endl;

    // 2. or
    bool r4 = t1 && t2; // true (both true)
    bool r5 = t1 && f1; // true (one true , one false)
    bool r6 = f1 && f2; // false (both false)
    std::cout << std::boolalpha;
    std::cout << r4 << std::endl;
    std::cout << r5 << std::endl;
    std::cout << r6 << std::endl;

    // 3. not
    bool n1 = !t1; // false (not true)
    bool n2 = !f1; // true (not false)
    std::cout << std::boolalpha;
    std::cout << n1 << std::endl;
    std::cout << n2 << std::endl;

    return 0;
}
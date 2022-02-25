#include <iostream>

int main()
{
    // relational operators are: < , <= , > , >= , ==, !=
    int v1 = 1;
    int v2 = 2;
    std::cout << std::boolalpha;
    // By the way, To print out this operators, we need to wrap it with parenthesis
    // Because Bitwise operator(<< , >>) have hihger priority than relational operator
    std::cout << (v1 > v2) << std::endl;  // false
    std::cout << (v1 >= v2) << std::endl; // false
    std::cout << (v1 < v2) << std::endl;  // true
    std::cout << (v1 <= v2) << std::endl; // true
    std::cout << (v1 == v2) << std::endl; // false
    std::cout << (v1 != v2) << std::endl; // true

    // also you can store result of this operator.
    bool result = (v1 != v2);
    return 0;
}
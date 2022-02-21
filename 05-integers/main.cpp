#include <iostream>

int main()
{
    // int takes four bytes memory
    //  3 ways to initialize Integer type
    //  1. curly braced
    int elephant_count; // garbage value -- warning
    int zero_int{};     // initialize zero
    int curly_int1{1};
    int curly_int2{2};
    int expr_in_brace{curly_int1 + curly_int2}; // you can use expression in curly braces
    // 2. function style
    int func_int(1);
    int expr_in_func(curly_int1 + curly_int2);
    int narrowing_conversion_func(2.9); // functional initialization can hold fractional number and cut number next to point
    // 3. assigning
    int assiged_int = 1;

    // we can check the size of int with 'sizeof'
    std::cout << "size of int : " << sizeof(int) << std::endl;      // 4bytes
    std::cout << "size of int : " << sizeof(zero_int) << std::endl; // 4bytes
    return 0;
}
#include <iostream>

int main()
{
    // ternary structure is 'result = (condition) ? option1 : option2;'
    // ternary assignment
    int max;
    int a = 35;
    int b = 25;

    max = (a > b) ? a : b;
    std::cout << max << std::endl;
    // here 'max' is already int type
    // So Whatever the type is, it will be implicitly converted to int
    max = (a < b) ? a : 22.5f; // max will be 22, not 22.5

    // ternary initialization
    bool fast = false;
    int is_fast = fast ? 1 : 0;
    std::cout << is_fast << std::endl;
    // initialization can change type according to condition
    auto is_fast_two = fast ? 1 : 0.5f;
    std::cout << is_fast_two << std::endl; // this will print 0.5
    return 0;
}
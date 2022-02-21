#include <iostream>

// int is return type
// addTwoNumber is function name
//(int a, int b) is parameters whose type is int
int addTwoNumber(int a, int b)
{
    return a + b;
}

int mulTwoNumber(int a, int b)
{
    return a * b;
}

int main()
{
    int first_num{3};  // statement
    int second_num{7}; // statement

    // use function
    int sum = addTwoNumber(first_num, second_num);
    int mul = mulTwoNumber(first_num, second_num);

    std::cout << "First num : " << first_num << std::endl;
    std::cout << "Second num : " << second_num << std::endl;
    std::cout << "Sum : " << sum << std::endl;
    std::cout << "Multiplication : " << mul << std::endl;

    return 0;
}
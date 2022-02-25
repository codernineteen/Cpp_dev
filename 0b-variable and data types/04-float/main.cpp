#include <iostream>
#include <iomanip>

int main()
{
    // using suffix is important
    // float need 'f' at the end of the number
    // long double need 'L'
    float number1{1.1234567891234567890f};       // 4bytes - precision: 7
    double number2{1.1234567891234567890};       // 8bytes - precision: 15 (recommended as default)
    long double number3{1.1234567891234567890L}; // 16bytes - precision: 15+ digits

    // Precision
    std::cout << std::setprecision(20); // control the precisin from std::cout
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    // Float problems : the precision is usually too limited(regardless of way of initialization)
    float number4{1982235432.0f}; // narrowing conversion

    // scientific notation
    // number5 and number6 have same value
    double number5{192400023e8};
    double number6{1.92400023e8};
    // similarly
    double num7{0.000314};
    double num8{3.14e3};

    double n1{1};
    double z1{};
    double z2{};
    // infinity : n/0
    double inf{n1 / z1}; // positive infinity
    // NaN: 0/0
    double nan{z1 / z2};

    return 0;
}
#include <iostream>

int main()
{
    // auto is used for abbreviating verbose type.
    // you can tell what the type of value is by using suffix
    auto v1 = 12;    // signed int
    auto v2 = 13.0;  // double
    auto v3 = 13.0f; // float
    auto v4 = 13.0l; // long double
    auto v5 = 'e';   // char

    // int modifier suffixes
    auto v6 = 123u;  // unsigned int
    auto v7 = 123ul; // unsigned long
    auto v8 = 123ll; // long long

    return 0;
}
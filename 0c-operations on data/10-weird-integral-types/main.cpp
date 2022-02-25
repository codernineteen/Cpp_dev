#include <iostream>

int main()
{
    // char and short int are also integral type
    // But you cannot do arithmetic operations with these types.
    short int v1 = 10;
    short int v2 = 20;
    char v3 = 50;
    char v4 = 60;
    std::cout << sizeof(v1) << std::endl;
    std::cout << sizeof(v2) << std::endl;

    auto result = v3 + v4;                     // v3, v4 automatically changed as int type
    std::cout << sizeof(v1 + v2) << std::endl; // addition operations will change result size to 4bytes
    std::cout << result << "/" << sizeof(result) << std::endl;

    return 0;
}

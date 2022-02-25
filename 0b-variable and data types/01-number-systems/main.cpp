#include <iostream>

// All data is represented by binary
// As the range of data grows, the number of digits that we need to handle also grow
// Hexadecimal makes it a little easier for humans to handle streams of binary data

int main()
{
    // use representation which you feel comfortable with
    int number1 = 15;         // Decimal
    int number2 = 017;        // Octal , In Cpp, Octal needs '0' in front of number
    int number3 = 0x0f;       // hexadecimal, need 0x
    int number4 = 0b00001111; // binary, need 0b

    // All print result same
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;
    std::cout << number4 << std::endl;

    return 0;
}
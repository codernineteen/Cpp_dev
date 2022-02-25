#include <iostream>
#include <iomanip>

int main()
{
    // 1. std::endl -> places a new line character on the output stream
    //  exactly indentical to placting '\n' (escaping)
    std::cout << "Hello " << std::endl;
    std::cout << "world!" << std::endl;
    std::cout << "---------------" << std::endl;
    std::cout << "Hello \n"; // work samely
    std::cout << "world!\n";
    std::cout << "---------------" << std::endl;

    // 2. std::flush -> flushes the output buffer to its final destination
    std::cout << "message is pretty good..." << std::endl
              << std::flush;
    // after std::flush, the message has been sent to the stream

    std::cout << "---------------" << std::endl;
    // 3. std::setw() , set width of an item which is about to be printed
    // setw() affects only next item of itself
    // setw() need library 'iomanip' (library of manipulators)
    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::endl;
    std::cout << std::setw(10) << "Yechan" << std::setw(10) << "Jeon" << std::endl;

    std::cout << "---------------" << std::endl;
    // 4. std:right, std::left and std::internal -> justify direction
    // right
    std::cout << std::right;
    std::cout << std::setw(20) << "Lastname" << std::setw(20) << "Firstname" << std::endl;
    std::cout << std::setw(20) << "Yechan" << std::setw(20) << "Jeon" << std::endl;

    // left
    std::cout << std::left;
    std::cout << std::setw(20) << "Lastname" << std::setw(20) << "Firstname" << std::endl;
    std::cout << std::setw(20) << "Yechan" << std::setw(20) << "Jeon" << std::endl;

    // internal
    std::cout << std::internal;
    // sign (-) is left justified and data(123.45) is right justified
    std::cout << std::setw(10) << -123.45 << std::endl;

    // 5. boolalpha vs noboolalpha
    std::cout << std::boolalpha;
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    std::cout << std::noboolalpha;
    std::cout << true << std::endl;
    std::cout << false << std::endl;

    // 6. showpos vs noshowpos (decide whether you will show positive sign(+))
    std::cout << std::showpos;
    std::cout << 34 << std::endl;

    // 7. std::dec, std::hex, std::oct -> print different number systems
    int pos_int = 123456;
    std::cout << "dec: " << std::dec << pos_int << std::endl;
    std::cout << "hex: " << std::hex << pos_int << std::endl;
    std::cout << "oct: " << std::oct << pos_int << std::endl;
    // But, double doesn't apply number systems formatter

    // you can change number to uppercase
    std::cout << std::uppercase;
    std::cout << "dec: " << std::dec << pos_int << std::endl;
    std::cout << "hex: " << std::hex << pos_int << std::endl;
    std::cout << "oct: " << std::oct << pos_int << std::endl;

    // Additonally, there are several useful manipulator,
    // std::scientific(show scientific notation (e))
    // std::fixed(set fixed visible range of a number)
    // std::setprecision(set precision of float, double and long double. precision is limited by its number type - float: 7, double: 15)
    // std::showpoint(set whether you will show point of float number)
    return 0;
}
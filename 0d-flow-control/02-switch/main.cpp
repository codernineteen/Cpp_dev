#include <iostream>

const int Pen{10};
const int Eraser{20};
const int knife{30};
const int Circle{40};
const int Rectangle{50};
const int triangle{60};

int main()
{
    // break statment after each case is very important.
    // it stops process of switch block when a successful case detected
    // if there isn't break, all the case will be executed.
    // conditions can be integral types and enum(int, long, unsigned short, etc..)
    int tool = Pen;
    switch (tool)
    {
    case Pen:
        std::cout << "This is a pen" << std::endl;
        break;

    case Eraser:
        std::cout << "This is a pen" << std::endl;
        break;

    case knife:
        std::cout << "This is a pen" << std::endl;
        break;

    // you can bind several conditions
    case Circle:
    case Rectangle:
    case triangle:
        std::cout << "this is a shape" << std::endl;
        break;

    default:
        std::cout << "There is no tool you want" << std::endl;
        break;
    }
    return 0;
}
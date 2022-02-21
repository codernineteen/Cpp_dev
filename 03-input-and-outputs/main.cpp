#include <iostream>
// load string type
#include <string>

int main()
{
    std::string name;
    int age;

    // printing data
    std::cout << "Hello, world!" << std::endl;

    std::cout << "Enter your name : " << std::endl;
    std::cin >> name; // take input

    std::cout << "Enter your age : " << std::endl;
    std::cin >> age; // take input

    // print output
    std::cout << "your name : " << name << "(" << age << ")" << std::endl;

    std::string full_name;
    int age1;

    std::cout << "Please type your full name and age" << std::endl;
    // getline takes space between input
    std::getline(std::cin, full_name); // first parameter is input stream and second is where to store data
    std::cin >> age1;

    std::cout << "your full name and age:" << full_name << age1 << std::endl;

    return 0;
}
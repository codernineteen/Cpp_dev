#include <iostream>

int main()
{
    int num = 3;
    // if ,  else
    if (num == 1)
    {
        std::cout << "number is 1" << std::endl;
    }
    else
    {
        std::cout << "number is not 1" << std::endl;
    }

    // if , else if, else
    if (num == 10)
    {
        std::cout << "number is 10" << std::endl;
    }
    else if (num == 5)
    {
        std::cout << "number is 5" << std::endl;
    }
    else
    {
        std::cout << "number is neither 10 nor 5" << std::endl;
    }
    // if(!())
    bool result = false;
    bool result2 = true;
    if (!(result == true))
    {
        std::cout << "result is false" << std::endl;
    }

    // if conidtion is bool, you can do like this
    // this is useful when you use dynamic variable for condition
    if (!result)
    {
        std::cout << "result is false" << std::endl;
    }
    if (result2)
    {
        std::cout << "result is true" << std::endl;
    }

    // nested statement
    if (result2)
    {
        if (result)
        {
            std::cout << "result is true\n";
        }
        else
        {
            std::cout << "result is false\n";
        }
    }

    // combination of conditions
    if (result || result2)
    {
        std::cout << "one of condition is true" << std::endl;
    }
    return 0;
}

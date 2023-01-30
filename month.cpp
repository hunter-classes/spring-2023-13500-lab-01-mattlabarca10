/*
*/

#include <iostream>
int main()
{
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;
    std::cout << "Enter a month: ";
    int month;
    std::cin >> month;
    if(year % 4 != 0)
        std::cout << "It is a common year" << std::endl;
    else if(year % 100 != 0)
        std::cout << "It is a leap year" << std::endl;
    else if(year % 400 != 0)
        std::cout << "It is a common year" << std::endl;
    else
        std::cout << "It is a leap year" << std::endl;
    return 0;
}
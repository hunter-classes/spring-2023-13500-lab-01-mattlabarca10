/*if (year is not divisible by 4) then (it is a common year)
else if (year is not divisible by 100) then (it is a leap year)
else if (year is not divisible by 400) then (it is a common year)
else (it is a leap year)*/

#include <iostream>
int main()
{
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;
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
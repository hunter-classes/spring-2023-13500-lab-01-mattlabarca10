#include <iostream>
int main()
{
    std::cout << "Enter a year: ";
    int year;
    std::cin >> year;
    std::cout << "Enter a month: ";
    int month;
    std::cin >> month;
    bool leap;
    if(year % 4 != 0)
        leap = false;
    else if(year % 100 != 0)
        leap = true;
    else if(year % 400 != 0)
        leap = false;
    else
        leap = true;
    return 0;
    if(month == 2 && leap == false)
        std::cout << "28 days" << std::endl;
    else if(month == 2 && leap == true)
        std::cout << "29 days" << std::endl;
    else if(month == 4 || month == 6 || month == 9 || month == 11)
        std::cout << "30 days" << std::endl;
    else
        std::cout << "31 days" << std::endl;
}
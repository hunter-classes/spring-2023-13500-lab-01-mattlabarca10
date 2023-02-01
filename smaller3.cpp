/*$ ./smaller3
Enter the first number: 23
Enter the second number: 76
Enter the third number: 37

The smaller of the three is 23*/

#include <iostream>
int main()
{
    int a, b, c;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << "Enter the third number: ";
    std::cin >> c;
    if (a < b && a < c)
        std::cout << "The smaller of the three is " << a << std::endl;
    else if (b < a && b < c)
        std::cout << "The smaller of the three is " << b << std::endl;
    else if (c < a && c < b)
        std::cout << "The smaller of the three is " << c << std::endl;
    else
        std::cout << "The numbers are equal" << std::endl;
    return 0;
}
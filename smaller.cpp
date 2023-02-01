/*$ ./smaller
Enter the first number: 15
Enter the second number: -24
The smaller of the two is -24*/
#include <iostream>
int main()
{
    int a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    if (a < b)
        std::cout << "The smaller of the two is " << a << std::endl;
    else if(b < a)
        std::cout << "The smaller of the two is " << b << std::endl;
    else
        std::cout << "The numbers are equal" << std::endl;
    return 0;
}

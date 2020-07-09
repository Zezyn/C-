#include<iostream>


int main()
{
    int x = 10;
    int *xPtr = &x;
    *xPtr = 10;
    std::cout << "The address of x is:" << &x << std::endl;
    std::cout << "The value of xPtr is:" << xPtr << std::endl;
    std::cout << "The address of xPtr is:" << &xPtr << std::endl;
    std::cout << "The value at x is: " << x << std::endl;
    std::cout << "The value at what xPtr points to + the value of x is: " << *xPtr << std::endl;

    return 0;
}

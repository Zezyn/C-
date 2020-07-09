#include<iostream>
#include<iomanip>
#include<cmath>

typedef double (*DoubleFunPointer)(double);

void print_table(DoubleFunPointer f)
{
   std::cout << std::setprecision(2)
             << std::fixed
             << std::showpoint;

   for (double x = 1; x <= 10; x++)
   {
      double y = f(x);
      std::cout << std::setw(10) << x << "|" << std::setw(10) << y << std::endl;
   }
}

double square(double n)
{
    return n * n;
}

double cube(double n)
{
    return n * n * n;
}

int main()
{
    std::cout << "sqrt:" << std::endl;
    print_table(sqrt);
    std::cout << "--------------------------" << std::endl;
    std::cout << "square:" << std::endl;
    print_table(square);
    std::cout << "--------------------------" << std::endl;
    std::cout << "cube:" << std::endl;
    print_table(cube);
    std::cout << "--------------------------" << std::endl;
    return 0;
}


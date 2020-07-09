#include<iostream>


char* create_password(int size)
{
    char *iarray = new char[size];
    return iarray;
}

const int SIZE = 15;

char* do_something_with_an_array()
{
    char *pass = create_password(SIZE);
    
    pass[0] = 'm';
    pass[1] = 'y';
    pass[2] = 'd';
    pass[3] = 'o';
    pass[4] = 'g';
    pass[5] = '\0';


    int *sneaky = (int*)pass;

    std::cout << pass << std::endl;
    std::cout << std::hex << sneaky[0] << std::endl;
    std::cout << std::hex << sneaky[1] << std::endl;
    
    //delete [] pass;

    return pass;
}

int main()
{

    char* p = do_something_with_an_array();

    return 0;
}

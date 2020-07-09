#include<iostream>
#include<cstring>
#include<string>


int main()
{
    //char buffer[1024];
    //char password[] = "zwitterion";
    std::string buffer;
    std::string password= "zwitterion";
    while(!std::cin.eof())
    {
        std::getline(std::cin,buffer);
        std::cout << ".";
        if(buffer == password)
        {
            std::cout << "The password is: " << buffer << std::endl;
            break;
        }
    //    std::cout << buffer << std::endl;
    }
    return 0;

}

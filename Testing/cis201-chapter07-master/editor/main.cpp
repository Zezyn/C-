#include<iostream>
#include<string>


char* next_line(char *ptr)
{
    while(*ptr!='\0')
        ptr++;
    return ptr+1;
}

int main()
{
    char buffer[1000];
    char *lines[3];
    int count=0;
    while(!std::cin.eof())
    {
        char c;
        std::cin.get(c);
        if(c == '\n')
            buffer[count] = '\0';
        else
            buffer[count] = c;

        count++;
    }
    char *current_char=buffer; 
    for(int i=0;i<3;i++)
    {
        lines[i] = current_char;
        current_char = next_line(current_char);
    }

    for(int i=0;i<3;i++)
    {
        std::cout << lines[i] << std::endl;
    }

    return 0;
}

#include<iostream>

int str_len(const char* str_ptr)
{

    int length=0;
    while(*str_ptr != '\0')
    {
        length++;
        str_ptr++;
    }
    return length;
}
bool is_palindrome(const char* str)
{
    int length = str_len(str);
    const char *begin = str;
    const char *end = &str[length-1];
    int found = true;
    int count=0;
    while( count < length / 2)
    {
        if(*begin == *end)
        {
            begin++;
            end--;
            count++;
        }
        else
        {
            found = false;
            break;
        }

    }
    return found;
}

void init_string(char* str)
{
    str[0] = 'T';
    str[1] = 'h';
    str[2] = 'e';
    str[3] = ' ';
    str[4] = 'q';
    str[5] = 'u';
    str[6] = 'i';
    str[7] = 'c';
    str[8] = 'k';
    str[9] = ' ';
    str[10] = 'b';
    str[11] = 'r';
    str[12] = 'o';
    str[13] = 'w';
    str[14] = 'n';
    str[15] = ' ';
    str[16] = 'f';
    str[17] = 'o';
    str[18] = 'x';
    str[19] = ' ';
    str[20] = 'j';
    str[21] = 'u';
    str[22] = 'm';
    str[23] = 'p';
    str[24] = 'e';
    str[25] = 'd';
    str[26] = '\0';
}
int main()
{
    if(is_palindrome("madamimadam"))
        std::cout << "is a palindrome" << std::endl;
    else
        std::cout << "is not a palindrome" << std::endl;
    return 0;


}

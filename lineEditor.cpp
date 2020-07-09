#include <iostream>
#include <string>

int string_length(const char* st)
{
    int count;
    int i = 0;
    while(st[i] != '\0')
    {
        i++;
    }
    return i;
}


int main()
{
    std::string paragraph = "Test Test\nPtest test\ntesttestest.\nThere are hundreds of lines in this. \nhello\njohnny\nkeya\nlines everywhere\nzodiac\nxenoblade\ncaricature\nnumbani\nbasketball.\n";
    int current_index = 0;
    char buffer[1000];
    const char* characterization = paragraph.c_str();
    int length1 = string_length(characterization);
    int value = 0;
    while (*characterization != '\0')
    {
        if (*characterization == '\n')
        {
            buffer[value] = '\0';
        }
        else
        {
            buffer[value] = *characterization;
        }
        characterization++;
        value++;
    }
    int last_appear = -1;
    char* lines = new char[100];
    for (int i = 0; i < length1; i++)
    {
        if (current_index < 100 && buffer[i] == '\0')
        {
            lines[current_index] = buffer[last_appear+1];
            last_appear = i;
            current_index++;
        }
    }
    for (int i = 0; i < length1; i++)
    {
        std::cout << buffer[i];
    }
    for (int i = 0; i < current_index; i++)
    {
        std::cout << lines[i] << std::endl;
    }
    std::cout << current_index << std::endl;
    return 0;
}
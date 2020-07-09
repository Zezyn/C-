#include<iostream>
#include<string>

int str_len(const char* str)
{
    int length=0;
    while(*str != '\0')
    {
        //space_count += (*m_ptr == ' ') ? 1 : 0;
        str++;
        length++;
    }
    return length;

}

class Buffer
{
public:
    Buffer();
    void read(const char* str);
private:
    char* lines[100];
    int current_index;
};

Buffer::Buffer()
{
    current_index = 0;
}

void Buffer::read(const char* str)
{
    while(*str != '\0')
    {
        if(*str == '\n')
        {
           lines[current_index] = str;
        }
        str++;
    }

    current_index++;
}

int main()
{

    std::string paragraph = "This is a sentence.\nThis is a sentence on another line.";
    return 0;
}

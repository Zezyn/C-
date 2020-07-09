#include "word.h"
#include <iostream>

Word::Word(std::string  word)
{
   std::string l_word = "";
   for(int i = 0; i < word.size(); i++){
        l_word += tolower(word[i]);
   }
   m_word = l_word;
   m_count = 1;
}

void Word::add_count(int count)
{
   m_count++;
}

void Word::add_line(int line)
{
   for(int i = 0; i < m_line.size(); i++){
        if(m_line[i] == line){
            return;
        }
   }
   m_line.push_back(line);
}

std::string Word::get_word()
{
    return m_word;
}

int Word::get_count()
{
    return m_count;
}

void Word::print_lines()
{
    for(int i = 0; i < m_line.size(); i++)
    {
        std::cout << m_line[i];
        if( i < m_line.size()-1)
        {
            std::cout << "|||";
        }
    }
}

void Word::print() const
{
    std::cout << m_word << ", " << m_count << ", ";
    for (int i = 0; i < m_line.size(); i++)
    {
        std::cout << ", " << m_count << ", " << m_line[i];
    }
    std::cout << std::endl;
}











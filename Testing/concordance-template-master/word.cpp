#include "word.h"
#include <iostream>

Word::Word(std::string word)
{
   m_word = word;
   m_count = 1;
}

void Word::add_count(int count)
{
   m_count++;
}

void Word::add_line(int line)
{
   m_line.push_back(line);
   //m_line++;
}

std::string Word::get_word() 
{
	return m_word;
}

void Word::print() const
{
	std::cout << m_word << ", "<< m_count << ", ";
	//<< " : " << m_count << " : " << m_line[0];
	for(int i=0; i < m_line.size(); i++)
	{
		std::cout << ", "<< m_count << ", " << m_line[i];
	}
	std::cout << std::endl;
}
#include "concordance.h"
#include <iostream>
#include <cassert>

Concordance::Concordance(std::string filename)
{
    m_filename = filename;
}

void Concordance::parse()
{
    std::ifstream textfile(m_filename.c_str());
    std::string sentence;
    int line_count = 1;
    while(std::getline(textfile, sentence))
    {
        std::cout << "bug 1" << std::endl;
        std::istringstream stream(sentence);
        std::string word;
        while(stream >> word)
        {   
            int index = find_word(word);
            
            if (index != -1)
            {
                m_word_stats[index].add_count(1);
                m_word_stats[index].add_line(line_count);
            }
            else
            {
                Word new_word(word);
                new_word.add_line(line_count);
                m_word_stats.push_back(new_word);
            }

        }
        
        line_count += 1;
        //line_count ++;
    }
    assert(textfile.is_open());
}

int Concordance::find_word(std::string word)
{
    std::string l_word = "";
    for(int i = 0; i < word.size(); i++){
        l_word += tolower(word[i]);
    }

    for(int i = 0; i < m_word_stats.size(); i++){
        if(m_word_stats[i].get_word() == l_word) 
        {
            return i;
        }
    }
    return -1;
}

void Concordance::print()
{
    for(int i = 0; i < m_word_stats.size(); i++)
    {
        //std::cout << "HEllo print nbut" << std::endl;
        std::cout << m_word_stats[i].get_word() << "|||";
        std::cout << m_word_stats[i].get_count() << "|||";
        m_word_stats[i].print_lines();
        std::cout << std::endl;
    }
}



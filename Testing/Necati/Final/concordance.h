#ifndef CONCORDANCE_H
#define CONCORDANCE_H
#include "word.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <cctype>
#include <vector>

class Concordance
{
public:
    Concordance(std::string filename);
    void parse();
    int find_word(std::string word);
    void print();
private:
    std::vector<Word> m_word_stats;
    std::string m_filename;
};

#endif

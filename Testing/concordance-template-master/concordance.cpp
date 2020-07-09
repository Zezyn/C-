#include "concordance.h"

Concordance::Concordance(std::string filename)
{
    m_filename = filename;
	total_in_txt = 1;
}

void Concordance::parse()
{
	
	
	std::ifstream file(m_filename.c_str());
    while(!file.eof())
    {
        std::string word = next_word(file);
		word = Remove_Punctuation(word);
		//std::cout << m_words.size() << std::endl;
		if(m_words.size() == 0) 
		{
			m_words.push_back(Word(word));
		}
		else 
		{
			for(int i = 0; i <= m_words.size()-1; i++)
			{
				if(m_words[i].get_word() == word)
				{
					total_in_txt++;
					m_words[i].add_count(total_in_txt);	
				}
			}
			m_words.push_back(Word(word));
		}
		// implement the rest of this function
        // This is just to see the words as they are printed out.
        // The word may have some puncuation attached to it, this
        // will be ok for this example.
    }
}

bool Concordance::is_whitespace(char c)
{
  return (c == ' ' || c == '\n' ||  c == '\t');
}

void Concordance::eat_whitespace(std::ifstream& input)
{
    for(;;)
    {
        char c;
        input.get(c);
        if(input.eof())
            break;
        if(!is_whitespace(c))
        {
            input.putback(c); // this will put the character back on the input stream
            break;
        }
    }
}

std::string Concordance::next_word(std::ifstream& input)
{
    std::string word;
    for(;;)
    {
        char c;
        input.get(c);
		
        if(input.eof())
            break;
        if(!is_whitespace(c))
        {
            word += tolower(c);
        }
        else if (is_whitespace(c))
        {
            eat_whitespace(input);
            break;
        }
    }
    return word;
}

void Concordance::print()
{
    // print out the concordance
	//std::cout << m_words.size() << std::endl;
	for(int index = 0;index<m_words.size()-1;index++) 
	{
		m_words[index].print();
	}
}

std::string Concordance::Remove_Punctuation(std::string word) 
{
	for(int i = 0; i < word.length(); i++)
	{
		if(ispunct(word[i]))
		{
			word.erase(i--, 1);
		}
	}
	return word;
}
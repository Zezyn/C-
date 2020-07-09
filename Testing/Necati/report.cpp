#include "report.h"
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <vector>
#include <iostream>

Report::Report()
{
};
   
void Report::read_id(){
    std::cout << "Enter Student id between 001-006";
    std::cin >> m_id;
}


void Report::check_student(const std::vector<std::string> &courses){
    std::ifstream file;
    std::string file_n;
    for(int i=0; i < courses.size(); i++)
    {
        file_n = courses[i] + ".txt";
        file.open(file_n.c_str());

        std::string line;
        std::string grade;
        while(file >> line)
        {
            if(atoi(line.c_str()) == m_id)
            {
                m_report.push_back(courses[i]);
                file >> grade;
                m_report.push_back(grade);
            }
        }
        
        file.close();
    }
}

std::ostream& Report::print(std::ostream& out){
    const int MANIP_L = 3;
    const int MANIP_W = 8;
    out << "Student's Report ";
    out << std::setfill('0') << std::setw(MANIP_L) << m_id << std::endl;

    for (int i = 0; i < m_report.size(); i++)
    {
        out << std::left << std::setfill(' ') << std::setw(MANIP_W) 
            << m_report[i] << ' ';
            i++;
            out << m_report[i] << std::endl;
    }
    return out;
}

std::vector<std::string> Report::fill(std::ifstream &classes){
    std::string course;
    std::vector<std::string> c;
    
    while(classes >> course)
        c.push_back(course);

    return c;
}


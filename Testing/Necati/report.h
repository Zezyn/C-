#ifndef REPORT_H
#define REPORT_H
#include <fstream>
#include <cstdlib>
#include <vector>
class Report
{
    int m_id;
    std::vector<std::string> m_report;
    
    public:
        Report();
        void read_id();
        void check_student(const std::vector<std::string> &courses);
        std::ostream& print(std::ostream& out);
        std::vector<std::string> fill(std::ifstream &classes);
};

#endif

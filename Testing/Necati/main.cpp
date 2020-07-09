#include <iostream>
#include <vector>
#include "report.h"
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	argc = 3;
    std::string filename = argv[1];
    std::ifstream classes;
    classes.open(filename.c_str());
    if(classes.fail())
    {
        std::cout << "ERROR OPENING FILE"  << filename << std::endl;
        return 1;
    }
    
    Report report;
    std::vector<std::string> courses = report.fill(classes);
    classes.close();
    
    report.read_id();
    report.check_student(courses);

    if(argc == 2)
    {
        report.print(std::cout);
    }
    else if(argc == 3)
    {
        std::string path = argv[2];
        std::ofstream output;
        output.open(path.c_str());
        report.print(output);
        output.close();
    }

   return 0;
}

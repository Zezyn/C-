//
// Created by Martin on 6/6/2016.
//

#include "lineEditor.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

void lineEditor::newText()
{

}

void lineEditor::openText()
{
    cout << "Enter filename: ";
    std::string filen;
    cin >> filen;
    cout << endl;

    std::string filename;
    getline(cin, filename);  // <- to allow whitespaces
    std::fstream f(filename, ios::in);
// do something with the file
    f.close();

// Open file
    ifstream file(filename.c_str());

}

void lineEditor::saveText()
{
    std::string filename;
    std::cout << "Please enter a file name (ex:filename.txt): ";
    std::cin >> filename;

    //for(std::vector<int>::iterator it = text.begin(); it != text.end();it++)
      //  cout <<*it<<std::endl;

    for(int i=0;i<5;i++)
        { cout << text[i] << endl; }
    Text();
}

void lineEditor::Text()
{
    std::string line;
    int linenum = 2;

    std::cout << endl << "*****************************************************" << endl;
    std::cout << "              Line        Editor                     " << endl;
    std::cout << "*****************************************************" << endl;
    std::cout << "!N = Blank Page | !O = Open | !S = Save | !Q to quit" << endl;
    std::cout << "*****************************************************" << endl;
    std::cout << "1> ";

    while(getline(cin, line))
    {
        if (line == "!Q") {
            exit(1);
        }
        else if (line == "!N") {
            newText();
        }
        else if (line == "!O") {
            openText();
        }
        else if (line == "!S") {
            saveText();
        }
        else {
            cout << linenum << "> ";
            text.push_back(line);
            linenum += 1;
        }
    }
}
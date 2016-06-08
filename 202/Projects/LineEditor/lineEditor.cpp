//
// Created by Martin on 6/6/2016.
//

#include "lineEditor.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <vector> 

using namespace std;

void lineEditor::newText()
{
    text.clear();
    linenum = 1;
    std::cout << linenum << "> ";
}

void lineEditor::openText()
{
    std:string buffer;

    cout << "Please enter a filename to open (ex: filename.txt): ";
    std::string filename;
    cin >> filename;
    cin.ignore();

    std::ifstream f;
    f.open(filename);
    while(!f.eof()) {        
        getline(f, buffer);
        f.ignore();
        std::cout << "BUFFER: " << buffer << endl;
        text.push_back(buffer);
    }
    cout << text.size() << endl;
    for(std::vector<string>::iterator it = text.begin(); it != text.end(); it++)
    {
        std::cout << *it << endl;
    } 
    /*
    for(int in=0;in<text.size();in++) 
    {
        //std::cout << text[in];
        std::cout << linenum << "> " << text[in] << endl;
        linenum += 1;
    }
    
    cout << endl;
    */
}

void lineEditor::saveText()
{
    std::string filename;
    std::cout << "Please enter a file name to save as (ex: filename.txt): ";
    std::cin >> filename;
    std::cin.ignore();

    std::ofstream f;
    f.open(filename);
    for(int i=0;i<5;i++)
    { 
        //cout << text[i] << endl; 
        f << text[i] << endl;
    }
    f.close();
}

void lineEditor::Text()
{
    std::string line;

    std::cout << endl << "*****************************************************" << endl;
    std::cout << "              Line        Editor                     " << endl;
    std::cout << "*****************************************************" << endl;
    std::cout << "!N = Blank Page | !O = Open | !S = Save | !Q to quit" << endl;
    std::cout << "*****************************************************" << endl << endl;

    do
    {
        if (line == "!Q") {
            exit(1);
        }
        else if (line == "!N") {
            newText();
            //continue;
        }
        else if (line == "!O") {
            openText();
            //continue;
        }
        else if (line == "!S") {
            saveText();
            //continue;
        }
        else {
            std::cout << linenum << "> ";
            text.push_back(line);
            linenum += 1;
        }
    } while(getline(cin, line));
}

void lineEditor::editText() { 

}

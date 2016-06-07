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
    std::string filename;
    cin >> filename;
    cout << endl;

    char filename{256};
    cin.getline(filename, 256);  // <- to allow whitespaces
    std::fstream f(filename, ios::in);
// do something with the file
    f.close();

// Open file
    ifstream file(filename.c_str());

}

void lineEditor::saveText()
{

}

void lineEditor::Text()
{
    std::string line;
    getline(cin, line);
    text.push_back(line);
}
//
// Created by Martin on 6/6/2016.
//

#include "lineEditor.h"
#include <iostream>
#include <fstream>
#include <vector> 
#include <algorithm>

using namespace std;

void lineEditor::newText() //Creates a fresh page and clears the vector.
{
    text.clear();
    system("clear"); //Works in console possibly not windows
    std::cout << endl << "*****************************************************************" << endl;
    std::cout << "              Line        Editor                     " << endl;
    std::cout << "*****************************************************************" << endl;
    std::cout << "!N = Blank Page | !E = Edit | !O = Open | !S = Save | !Q to quit" << endl;
    std::cout << "*****************************************************************" << endl;
    linenum = 1;
    std::cout << linenum << "> ";
}

void lineEditor::editText() //Used to edit text
{ 
    
    std::string buffer;
    int lnr = 1;
    int lineedit;
    
    //User defined position to edit
    std::cout << std::endl << "Enter the line number you wish to edit: ";
    std::cin >> lineedit;
    lineedit = lineedit - lnr;
 
    //User defined replacement data
    std::cout << "Replace: " << text[lineedit] << std::endl;
    std::cout << "With: ";
    getline(cin, buffer);
    cin.ignore();

    //Replace data with user defined data
    vector<string>::iterator iter = text.begin();
    text.insert((iter+lineedit), buffer);  //Attempting to insert a string into the vector

    //replace(text.begin(), text.end(), text[lineedit], buffer); //Attempting to replace a string
    
    //Print new data for user to see
    linenum = lnr;
    for(std::vector<string>::iterator it = text.begin(); it != text.end(); it++)
    {
        std::cout << linenum << "> " << *it << std::endl;
        linenum += lnr;
    }
}

void lineEditor::openText() //Used to open files
{
    std:string buffer;
    int lnr = 1;

	//User Defined File name
    cout << "Please enter a filename to open (ex: filename.txt): ";
    std::string filename;
    cin >> filename;
    cin.ignore();

    //Open File
    std::ifstream f;
    f.open(filename);
    
    //File Verification
    if(f.fail()) 
    {
        cout << "Problem reading file" << endl;
        exit(1);
    }
    
    //Put file in vector
    while(! f.eof()) 
    {        
        getline(f, buffer);
	text.push_back(buffer);
    }	
    text.erase(text.begin()); 

    for(std::vector<string>::iterator it = text.begin(); it != text.end(); it++)
    {
        std::cout << linenum << "> " << *it << std::endl;
        linenum += lnr;
    }
    
    text.erase(text.end()); //This erases the land \n at the end of the file
    linenum = linenum - lnr; //fixes the line numbers due to line number 0
    std::cout << "Press Return to append.";
}

void lineEditor::saveText() //Used to save files
{
    //Get user defined file name
    std::string filename;
    std::cout << "Please enter a file name to save as (ex: filename.txt): ";
    std::cin >> filename;
    std::cin.ignore();

    //Open file to read in data
    std::ofstream f;
    f.open(filename);
    
    //File Verification
    if(f.fail())
    {
        cout << "Problem reading file" << endl;
        exit(1);
    }

    //Read into file from vector
    text.erase(text.begin()); //Erases first line which is a \n
    for(std::vector<string>::iterator it = text.begin(); it != text.end(); it++)
    { 
	    f << *it << endl;
    }
    f.close();
    
    std::cout << "Press Return to Continue";
}

void lineEditor::Text() //Line Editor
{
    std::string line;
    int lnr = 1;
    
    //Displays active menu
    std::cout << endl << "*****************************************************************" << endl;
    std::cout << "              Line        Editor                     " << endl;
    std::cout << "*****************************************************************" << endl;
    std::cout << "!N = Blank Page | !E = Edit | !O = Open | !S = Save | !Q to quit" << endl;
    std::cout << "*****************************************************************" << endl;

    do
    {
        if (line == "!Q") {
            exit(1);
        }
        else if (line == "!N") {
	        linenum = lnr;
            newText();
            continue;
        }
        else if (line == "!E") {
	        editText();
	    }
    	else if (line == "!O") {
	        linenum = linenum - lnr;
            openText();
            continue;
        }
        else if (line == "!S") {
	        linenum = linenum - lnr;
            saveText();
            continue;
        }
        else {
            std::cout << linenum << "> ";
            text.push_back(line);
            linenum += lnr;
        }
    } while(getline(cin, line));
}

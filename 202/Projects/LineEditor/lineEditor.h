//
// Created by Martin on 6/6/2016.
//


#ifndef LINEEDITOR_LINEEDITOR_H
#define LINEEDITOR_LINEEDITOR_H

#include <string>
#include <vector>

class lineEditor {
public:
    void newText();
    void editText();
    void openText();
    void saveText();
    void Text();
private:
    std::vector<std::string> text;
    int linenum = 1;
    int lnr = 1; //Used for line number manipulation
};


#endif //LINEEDITOR_LINEEDITOR_H

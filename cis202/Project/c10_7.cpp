/*
    Filename: c10_7.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 02/23/2016
    Description: Rational Class 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Rational {

    public:
        void input_from(ostream&, istream&);
        void values(ostream&, istream&);
        void add(ostream&, Rational* b);
/*        void sub(ostream&);
        void div(ostream&);
        void mul(ostream&);
        void neg(ostream&);
        bool lthan();
        void print_lthan(ostream &);
*/    
    private:
        int _num;
        int _denom;
        //int _num2;
        //int _denom2;   
        int _answer_num;
        int _answer_denom;    
        int _torf;
        string _tf;
};

int main() {
       
    ostream& output_stream = cout; 
    istream& input_stream = cin;
    
    Rational a;
    Rational* b;
    a.input_from(output_stream, input_stream);
    b.values(output_stream, input_stream);
    //numbers.values(output_stream,input_stream);
    a.add(output_stream, b);
    /*a.sub(output_stream);
    a.mul(output_stream);
    a.div(output_stream);
    a.neg(output_stream);
    a.print_lthan(output_stream);
    */return 0;
}

void Rational::input_from(ostream& o, istream& i) {
    
    int temp;
 
    o << endl << endl;
    o << "** What would you like to do? **" << endl << endl;
    o << "1) File Input" << endl << "2) User Input" << endl;
    o << endl;
    o << "Enter Choice: ";
    std::cin >> temp;
    o << "********************************************************" << endl;
    
    if(temp == 2) {
        istream& input_stream = cin;
        values(o, input_stream); 
    }
    else if (temp == 1) {
        char file[21];
        std::cout << "Enter file name: " << endl;
        std::cin >> file;
        ifstream myfile;
        myfile.open(file);

        if (myfile.fail()) {
             std::cout << "Input file failed to open." << endl; 
            exit(1); 
        }
        else {
            //myfile >> i;
        }
        myfile.close();
    }    
}

void Rational::values(ostream& o, istream& i) {

    char temp; 
    o << "Input: " << endl;
    i >> _num >> temp >> _denom;
    //i >> _num2 >> temp >> _denom2;

    if(a._denom == 0)
        { o << "You can not have 0 as a denominator." << endl; }
    else if (a._denom == '\n') {
        _denom = 1;
    }
    else if (b._denom == '\n') {
        b._denom = 1;
    }
}

void Rational::add(ostream& o, Rational* b) {
    
    a._answer_num = (a._num * b._denom + a._denom * b._num);
    a._answer_denom = (a._denom * b._denom);
    
    o << endl << "Addition: " << endl;
    o << "Number 1: " << a._num << "/" << a._denom << endl;
    o << "Number 2: " << b._num2  << "/" << b._denom2 << endl;
    o << endl << "Answer is: " << a._answer_num << "/" << a._answer_denom << endl;
    o << "********************************************************" << endl;
}
/*
void Rational::sub(ostream& o) {
   
    _answer_num = (_num * _denom2 - _denom * _num2);
    _answer_denom = (_denom * _denom2);
    
    o << "Subtraction: " << endl;
    o << "Number 1: " << _num << "/" << _denom << endl;
    o << "Number 2: " << _num2  << "/" << _denom2 << endl;
    o << endl << "Answer is: " << _answer_num << "/" << _answer_denom << endl;
    o << "********************************************************" << endl;
}

void Rational::div(ostream& o) {

    _answer_num = (_num * _denom2);
    _answer_denom = (_num2 * _denom);
    
    o << "Division: " << endl;
    o << "Number 1: " << _num << "/" << _denom << endl;
    o << "Number 2: " << _num2  << "/" << _denom2 << endl;
    o << endl << "Answer is: " << _answer_num << "/" << _answer_denom << endl;
    o << "********************************************************" << endl;
}

void Rational::mul(ostream& o) {
 
    _answer_num = (_num * _num2);
    _answer_denom = (_denom * _denom2);
    
    o << "Multiplication: " << endl;
    o << "Number 1: " << _num << "/" << _denom << endl;
    o << "Number 2: " << _num2  << "/" << _denom2 << endl;
    o << endl << "Answer is: " << _answer_num << "/" << _answer_denom << endl;
    o << "********************************************************" << endl;
}

void Rational::neg(ostream& o) {

    int answer_num2;
    int answer_denom2;
    int neg = -1;

    _answer_num = (_num * neg);
    //_answer_denom = (_denom * neg);
    answer_num2 = (_num2 * neg);
    //answer_denom2 = (_denom2 * neg);

    o << "Negative Value: " << endl;
    o << "Number 1: " << _num << "/" << _denom << endl;
    o << "Number 2: " << _num2  << "/" << _denom2 << endl;
    o << endl << "Answer is: " << _answer_num << "/" << _answer_denom << endl;
    o << "********************************************************" << endl;
}

bool Rational::lthan() {
    
    if((_num * _denom2)<(_num2 * _denom))
        return true;
    else
        return false;
}

void Rational::print_lthan(ostream& o){
        
    _torf = lthan();
    
    if(_torf == 1)
       { _tf="True"; }
    else
       { _tf="False"; }

    o << "Less Than: " << endl;
    o << "Number 1: " << _num << "/" << _denom << endl;
    o << "Number 2: " << _num2  << "/" << _denom2 << endl;
    o << endl << "Answer is: " << _tf << endl;
    o << "********************************************************" << endl;
}*/

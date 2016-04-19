/*
    Filename: c11_2.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/03/2016
    Description: Rational Class and Overloading 
*/

#include <iostream>

using namespace std;

class Rational {
    public:
        Rational();
        Rational(int);
        Rational(int, int);
        friend ostream& operator << (ostream&, const Rational&);
        friend istream& operator >> (istream&, const Rational&);
        friend Rational operator + (const Rational&, const Rational&);
        friend Rational operator - (const Rational&, const Rational&);
        friend Rational operator * (const Rational&, const Rational&);
        friend Rational operator / (const Rational&, const Rational&);
        friend bool operator == (const Rational&, Rational&);
        friend bool operator < (const Rational&, const Rational&);
        friend bool operator <= (const Rational&, const Rational&);
        friend bool operator > (const Rational&, const Rational&);
        friend bool operator >= (const Rational&, const Rational&);
        void get_input();
        void do_math(Rational&, Rational&);
        
    private:
        int num;
        int denom;
    
};

Rational::Rational() {
    num = 0;
    denom = 1;
}

Rational::Rational(int _num, int _denom) {
    num = _num;
    denom = _denom;
}

Rational::Rational(int whole) {
    num = whole;
    denom = 1;
}

istream& operator >> (istream& in, const Rational& x) {
    in >> x.num >> x.denom;
    return in;
}

ostream& operator << (ostream& out, const Rational& x) {
    if(x.denom == 0) {
        out << "Undefined.";
    }
    else
        out << x.num << "/" << x.denom; 
    return out;
}

Rational operator + (const Rational& a, const Rational& b) {
    Rational temp;
    temp.num = a.num * b.denom + b.num * a.denom;
    temp.denom = a.denom * b.denom;
    return temp;    
}

Rational operator - (const Rational& a, const Rational& b) {
    Rational temp;
    temp.num = a.num * b.denom - b.num * a.denom;
    temp.denom = a.denom * b.denom;
    return temp;    
}

Rational operator * (const Rational& a, const Rational& b) {
    Rational temp;
    temp.num = a.num * b.num;
    temp.denom = a.denom * b.denom;
    return temp;    
}

Rational operator / (const Rational& a, const Rational& b) {
    Rational temp;
    temp.num = a.num * b.denom;
    temp.denom = b.num * a.denom;
    return temp;    
}

bool operator == (const Rational& a, Rational& b) {
    return (a.num == b.num && a.denom == b.denom);
}

bool operator < (const Rational& a, const Rational& b) {
    return (a.num * b.denom) < (b.num *a.denom);
}

bool operator <= (const Rational& a, const Rational& b) {
    return (a.num * b.denom) <= (b.num * a.denom);
}

bool operator > (const Rational& a, const Rational& b) {
    return (a.num * b.denom) > (b.num * a.denom);
}

bool operator >= (const Rational& a, const Rational& b) {
    return (a.num * b.denom) >= (b.num * a.denom);
}

void Rational::get_input() {
 char temp; 
    cout << "Input a fraction (ex: numerator/denominator): ";
    cin >> num >> temp >> denom;
}

void Rational::do_math(Rational& a, Rational& b) {
    int temp;
    cout << endl << "*********************************" << endl; 
    cout << "**First Fraction: " << a << endl;
    cout << "**Second Fraction: " << b << endl;
    cout << "*********************************" << endl; 
    cout << "Addition: " << '\t' << a << " + " << b << " =\t\t " << a+b << endl;
    cout << "Subtraction: " << '\t' << a << " - " << b << " =\t\t " << a-b << endl;
    cout << "Multiplication: " << a << " * " << b << " =\t\t " << a*b << endl;
    cout << "Division: " << '\t' << a << " / " << b << " =\t\t " << a/b << endl;
    
    temp = a==b;
    if(temp == 0) 
        cout << a << " Equals " << b << ":\n\tFalse\n" << endl;
    else
        cout << a << " is not Equal to " << b << ":\n\tTrue\n" << endl;
    
    temp = a<b;
    if(temp == 0) 
        cout << a << " is Less Than " << b << ":\n\tFalse\n" << endl;
    else
        cout << a << " is not Less Than " << b << ":\n\tTrue\n" << endl;
    
    temp = a<=b;
    if(temp == 0) 
        cout << a << " is Less Than or Equal to " << b << ":\n\tFalse\n" << endl;
    else
        cout << a << " is not Less Than or Equal to " << b << ":\n\tTrue\n" << endl;
    
    temp = a>b;
    if(temp == 0) 
        cout << a << " is Greater Than " << b << ":\n\tFalse\n" << endl;
    else
        cout << a << " is not Greater Than " << b << ":\n\tTrue\n" << endl;
    
    temp = a>=b;
    if(temp == 0) 
        cout << a << " is Greater Than or Equal to " << b << ":\n\tFalse\n" << endl;
    else
        cout << a << " is not Greater Than or Equal to " << b << ":\n\tTrue\n" << endl;
}

int main() {
    
    Rational a;
    Rational b;
    
    a.get_input();
    b.get_input();
    
    a.do_math(a,b);
    
    return 0;
}

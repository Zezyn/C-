/*
    Filename: c11_2.cpp
    Problem:
    Author: Martin Hernandez 
    Email: 7607920511m.h@gmail.com
    Date: 03/03/2016
    Description: Complex Class and Overloading 
*/

#include <iostream>

using namespace std;

class Complex {
public:
    Complex();
    Complex(int);
    Complex(int, int);
    friend ostream& operator << (ostream&, const Complex&);
    friend istream& operator >> (istream&, const Complex&);
    friend Complex operator + (const Complex&, const Complex&);
    friend Complex operator - (const Complex&, const Complex&);
    friend Complex operator * (const Complex&, const Complex&);
    friend Complex operator / (const Complex&, const Complex&);
    friend bool operator == (const Complex&, Complex&);
    friend bool operator < (const Complex&, const Complex&);
    friend bool operator <= (const Complex&, const Complex&);
    friend bool operator > (const Complex&, const Complex&);
    friend bool operator >= (const Complex&, const Complex&);
    void get_input();
    void do_math(Complex&, Complex&);

private:
    int num;
    int denom;

};

Complex::Complex() {
    num = 0;
    denom = 1;
}

Complex::Complex(int _num, int _denom) {
    num = _num;
    denom = _denom;
}

Complex::Complex(int whole) {
    num = whole;
    denom = 1;
}

istream& operator >> (istream& in, const Complex& x) {
    in >> x.num >> x.denom;
    return in;
}

ostream& operator << (ostream& out, const Complex& x) {
    if(x.denom == 0) {
        out << "Undefined.";
    }
    else
        out << x.num << "/" << x.denom;
    return out;
}

Complex operator + (const Complex& a, const Complex& b) {
    Complex temp;
    temp.num = a.num * b.denom + b.num * a.denom;
    temp.denom = a.denom * b.denom;
    return temp;
}

Complex operator - (const Complex& a, const Complex& b) {
    Complex temp;
    temp.num = a.num * b.denom - b.num * a.denom;
    temp.denom = a.denom * b.denom;
    return temp;
}

Complex operator * (const Complex& a, const Complex& b) {
    Complex temp;
    temp.num = a.num * b.num;
    temp.denom = a.denom * b.denom;
    return temp;
}

Complex operator / (const Complex& a, const Complex& b) {
    Complex temp;
    temp.num = a.num * b.denom;
    temp.denom = b.num * a.denom;
    return temp;
}

bool operator == (const Complex& a, Complex& b) {
    return (a.num == b.num && a.denom == b.denom);
}

bool operator < (const Complex& a, const Complex& b) {
    return (a.num * b.denom) < (b.num *a.denom);
}

bool operator <= (const Complex& a, const Complex& b) {
    return (a.num * b.denom) <= (b.num * a.denom);
}

bool operator > (const Complex& a, const Complex& b) {
    return (a.num * b.denom) > (b.num * a.denom);
}

bool operator >= (const Complex& a, const Complex& b) {
    return (a.num * b.denom) >= (b.num * a.denom);
}

void Complex::get_input() {
    char temp;
    cout << "Input a fraction (ex: numerator/denominator): ";
    cin >> num >> temp >> denom;
}

void Complex::do_math(Complex& a, Complex& b) {
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

    Complex a;
    Complex b;

    a.get_input();
    b.get_input();

    a.do_math(a,b);

    return 0;
}

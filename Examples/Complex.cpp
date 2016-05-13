#include<iostream>

using namespace std;

class Complex
{
	double real,imaginary;

	public:
			Complex(double,double);
			Complex(double);
			Complex();
/*			friend Complex operator+(const Complex&,const Complex&);
			friend ostream& operator<<(ostream&,const Complex&);
			friend istream& operator>>(istream&,Complex&);
			friend void printComplex(const Complex&);
			*/
			double getReal() { return real;}
			double getImag() { return imaginary;}
			void setReal(double r){ real = r; }
			void setImag(double i){ imaginary = i; }
			void add(Complex& c);
			void printMe();

};
void Complex::printMe(){
	cout << getReal() << " + " << getImag() << "i";
}
void Complex::add(Complex& c){
	real += c.getReal();
	imaginary += c.getImag();
}
Complex::Complex(double r,double i)
{
	real = r;
	imaginary = i;
}

Complex::Complex(double r)
{
	real = r;
	imaginary = 0.0;
}

Complex::Complex()
{
	real = 0.0;
	imaginary = 0.0;
}

Complex operator+(const Complex& left,const Complex& right)
{
	Complex temp;
   temp.real = left.real + right.real;
	temp.imaginary = left.imaginary + right.imaginary;

	return temp;
}

ostream& operator<<(ostream& out,const Complex& a)
{
	out << a.real << " + " << a.imaginary << "i";
	return out;
}

istream& operator>>(istream& in,Complex& a)
{
	char one_char;
	in >> a.real;
	in >> one_char;
	if (one_char == '+')
	   in >> a.imaginary;
	return in;
}

void printComplex(const Complex& a)
{
	cout << a.real << " + " << a.imaginary << "i";
}

int main()
{
 
   Complex x(10.0,5.0),y(3.5,1.5);
	cout << "input x: ";
	cin >> x;
	cout << endl << "input y: ";
	cin >> y;

   Complex z = x + y;
   cout << "(" << x << ")" << " + (" << y << ") = " << z << endl;

	return 0;

}

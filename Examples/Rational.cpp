#include<iostream>

using namespace std;

class Rational
{
	private:
     int num,dem;
	public:
	    Rational();
		 Rational(int,int);
		 Rational(int);
		 friend ostream& operator<<(ostream& , const Rational&);
		 friend istream& operator>>(istream& , Rational&);
		 friend Rational operator+(const Rational& , const Rational&);
		 
};


Rational operator+(const Rational& a, const Rational& b)
{
	Rational temp;
	temp.num = a.num * b.dem + b.num * a.dem;
	temp.dem = a.dem * b.dem;
	return temp;
}

ostream& operator<<(ostream& out, const Rational& r)
{
	if (r.dem == 0)
		out << "undefined" ;
   else
		out << r.num << "/" << r.dem;
	return out;

}
istream& operator>>(istream& in, Rational& r)
{
    in >> r.num >> r.dem;	
	 return in;
}

Rational::Rational()
{
	num = 0;
	dem = 1;
}

Rational::Rational(int _num, int _dem)
{
	num = _num;
	dem = _dem;
}

Rational::Rational(int whole)
{
	num = whole;
	dem = 1;
}

int main()
{

   Rational a;
   Rational b(1,2);
   Rational bad(1,0);
   Rational c(10);


   cout << "a=" << a << endl;
   cout << "b=" << b << endl;
   cout << "bad=" << bad << endl;
   cout << "c=" << c << endl;

	cout << "Enter the rational number as num dem:";
	cin >> a;
   cout << "a=" << a << endl;
	cout << "a+b=" << (a + b) << endl;

	return 0;
}

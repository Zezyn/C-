#include<iostream>

using namespace std;

class Money
{
	public:
	   friend Money add(const Money&,const Money&);
	   void input(istream&);
	   void output(ostream&) const;

   private:
	  int dollars,cents;

};


void Money::input(istream& in)
{
}

void Money::output(ostream& out) const
{
	out <<"Money"<<endl;
}

Money add(const Money& amount1,const Money& amount2)
{
	Money res;
    res.dollars = amount1.dollars + amount2.dollars;
    res.cents = amount1.cents + amount2.cents;
    return res;
}

int main()
{

   Money one,two;
	add(one,two);
	return 0;
}

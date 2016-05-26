#include<iostream>

using namespace std;


class A
{
    public:
        void setx(long long int _x) {x = _x;};
        void sety(long long int _y) {y = _y;};
        long long int getx() const {return x;};
        long long int gety() const {return y;};
        void print();
        friend A add(const A&,const A&);
    private:
        long long int x,y;
};

void A::print()
{
    cout << "x=" << x << " y= " << y << endl;
}

/*
A add(const A&,const A&);

A add(const A& a1, const A& a2)
{
    A a3;
    a3.setx(a1.getx() + a2.getx());
    a3.sety(a1.gety() + a2.gety());
    return a3;
}
*/

A add(const A& a1, const A& a2)
{
    A a3;
    a3.x = a1.x + a2.x;
    a3.y= a1.y + a2.y;
    return a3;
}

const int TESTEND = 10000000;
int main()
{

    A a1,a2,a3;
    
    for (int i=0;i < TESTEND;i++)
    {
        a1.setx(100000000000);
        a1.sety(100000000000);
        a2.setx(200000000000);
        a2.sety(200000000000);
        a3 = add(a1,a2);
    }
    //a3.print();
    return 0;
}

#ifndef PAIR_H
#define PAIR_H

#include<iostream>
#include<fstream>

using namespace std;

template<class T>
class Pair
{
    private:
      T first,second;

    public:
      Pair();
      Pair(T,T);
      void set_element(T,int);
      T get_element();
      void print_element(int);
      template<typename T1>
      friend ostream& operator<<(ostream&,Pair<T1>&);
      
};

template<class T>
Pair<T>::Pair(T f,T s)
{
    first = f;
    second = s;
}

template<typename T1>
ostream& operator<<(ostream& os,Pair<T1>& p)
{
    os << "("<< p.first << "," << p.second << ")";
    return os;
}
#endif

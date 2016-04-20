#include<iostream>

using namespace std;

void getPoint(int& x,int& y);
void getPoint(double& x,double& y);

double slope(double x1,double y1,double x2,double y2);
double intercept(double x,double y,double m);
void displayPoint(double x,double y);
void displayF(double m,double b);

int main()
{

    double x1=0,y1=0;
    double x2=0,y2=0;
    getPoint(x1,y1);
    getPoint(x2,y2);
	displayPoint(x1,y1);
	displayPoint(x2,y2);
	double m = slope(x1,y1,x2,y2);
	double b = intercept(x1,y1,m);
    displayF(m,b);

	return 0;
}

void getPoint(int& x,int& y) {
	cout << "Enter the x and y coordinates : ";
	cin >> x >> y;
}

void getPoint(double& x,double& y) {
	cout << "Enter the x and y coordinates : ";
	cin >> x >> y;
}

double slope(double x1,double y1,double x2,double y2) {
   return (y2 - y1) / (x2 - x1);
}

double intercept(double x,double y,double m) {
	return y - m * x;
}

void displayPoint(double x,double y) {
	cout << "(" << x << "," << y << ")" << endl;
}

void displayF(double m,double b) {
	cout << "y = " << m << "x + " << b << endl;
}

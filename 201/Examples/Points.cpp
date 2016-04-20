#include<iostream>

using namespace std;

struct Point 
{
	int x,y;
};

struct Polygon
{
	Point topLeft,topRight,bottomLeft,bottomRight;
};

void getPoint(Point&);
Point makePoint(int,int);
void displayPoint(Point&);

int main() 
{

	Point origin,p1;
	Point p3 = {1,4};
	Point poly[10];
	Point *pPtr = new Point[100];
	Point c = makePoint(2,3);
	Point d = c;
	origin.x = 0;
	origin.y = 0;
	displayPoint(origin);
	getPoint(p1);
	displayPoint(p1);
	return 0;
}

void getPoint(Point& p)
{
	cin >> p.x >> p.y;
}

void displayPoint(Point& p)
{
	cout << "(" << p.x << "," << p.y << ")";
}

Point makePoint(int x,int y)
{
	Point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}













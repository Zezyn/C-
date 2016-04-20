#include<iostream>

using namespace std;

class Point 
{
	public:
	    Point();
	    Point(int,int);
		void display();
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		Point add(Point&);

	private:
		int x,y;
};

Point::Point() 
{
	x = y = 0;
}

Point::Point(int xVal,int yVal) 
{
	x = xVal;
	y = yVal;
}

void Point::setX(int xVal)
{
	if (xVal >= 0)
		x = xVal;
	else
		x = 0;
}

void Point::setY(int yVal)
{
	y = yVal;
}

int Point::getX()
{
	return x;
}

int Point::getY()
{
	return y;
}

Point Point::add(Point& p)
{
	Point temp;
	temp.x = x + p.x;
	temp.y = y + p.y;
	return temp;
}

void Point::display()
{
	cout << x << "," << y << endl;
}


struct Polygon
{
	Point topLeft,topRight,bottomLeft,bottomRight;
};


int main() 
{
	Point p1(1,1),p2(2,2),p3;
	Point *pPtr = new Point(5,5);
	pPtr->display();
	p1.display();
	p2.display();
	p3.display();
	p3 = p1.add(p2);
	p3 = p3.add(*pPtr);

	p3.display();
	return 0;
}












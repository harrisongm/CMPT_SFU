#include <iostream>

using namespace std;

class Point
{
private:
	float x, y;
public:
	//Constructor member function
	Point();
	Point(float newX, float newY);

	//Getter function
	float getX();
	float getY();

	//Setter functions
	void setX(float newX);
	void setY(float newY);

	//Additional member functions
	void print();
};

Point::Point()
{
	setX(0.0);
	setY(0.0);
}

Point::Point(float newX, float newY)
{
	setX(newX);
	setY(newY);
}

float Point::getX()
{
	return x;
}

float Point::getY()
{
	return y;
}

void Point::setX(float newX)
{
	x = newX;
}

void Point::setY(float newY)
{
	y = newY;
}

void Point::print()
{
	cout << "(" << getX() << ", " << getY() << ")";
}

class Line
{
private:
	Point start, end;
public:
	//Constructor member functions
	Line();
	Line(Point s, Point e);

	//Getters
	Point getStartPoint();
	Point getEndPoint();

	//Setters
	void setStartPoint(Point s);
	void setEndPoint(Point e);

	//Additional member functions
	float getLength();
	void print();
};

Line::Line()
{
}
Line::Line(Point s, Point e)
{
	setStartPoint(s);
	setEndPoint(e);
}

Point Line::getStartPoint()
{
	return start;
}
Point Line::getEndPoint()
{
	return end;
}

void Line::setStartPoint(Point s)
{
	start = s;
}
void Line::setEndPoint(Point e)
{
	end = e;
}

float Line::getLength()
{
	float xdiff = end.getX() - start.getX();
	float ydiff = end.getY() - start.getY();
	return sqrt(xdiff*xdiff + ydiff*ydiff);
}
void Line::print()
{
	start.print();
	cout << "---";
	end.print();
}


int main()
{
	//Test default constructor member function
	Line line1;
	
	//Test getStartPoint member function
	cout << "Start point of line1 is ";
	line1.getStartPoint().print();	//This must print (0, 0)
	cout << endl;
	
	//Test getEndPoint member function
	cout << "End point of line1 is ";
	line1.getEndPoint().print();	//This must print(0, 0)
	cout << endl;
	
	//Test setStartPoint member function
	line1.setEndPoint(Point(1.2, -1.5));
	cout << "Now, end point of line1 is ";
	line1.getEndPoint().print();	//This must print(1.2, -1.5)
	cout << endl;

	//Test Non-Default Constructor
	Point p1(2, 5);
	Line line2(p1, Point(-1, -2));

	//Test print member function
	cout << "line2 is ";
	line2.print();  //This must print (2, 5)---(-1, -2)
	cout << endl;
	
	//Test length member function
	cout << "The length of line1 is " << line1.getLength() << endl;	//This must print 1.920937
	cout << "The length of line2 is " << line2.getLength() << endl;	//This must print 7.615773
	
	system("Pause");
	return 0;
}

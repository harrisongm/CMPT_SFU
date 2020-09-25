#include <iostream>
using namespace std;

struct Point
{
	double x,y;
};
struct Line
{
	Point start, end;
};

Line readLine()
{
	Line line;
	cout << "Enter x and y coordinates of the start point ";
	cin >> line.start.x >> line.start.y;
	cout << "Enter x and y coordinates of the end point ";
	cin >> line.end.x >> line.end.y;
	return line;
}
void printLine(const Line& line)
{
	cout << "(" << line.start.x << ", " << line.start.y << ")---" <<
		    "(" << line.end.x << ", " << line.end.y << ")";
	return;
}
double getSlope(const Line* line)
{
	double y_diff = line->end.y - line->start.y;
	double x_diff = line->end.x - line->start.x;
	if (x_diff == 0)
		return 1.0E300;
	else
		return y_diff/x_diff;
}
int main()
{
	//Step 1. Read array size

	//Step 2. Create a dynamic array of line objects of the user defined size

	//Step 3. Read the line objects (call readLine function)

	//Step 4. Print the line objects (call printLine function)

	//Step 5. Print the parallel lines (use getSlope function)

	//Step 6. Delete the dynamic array

	//You are done!
}

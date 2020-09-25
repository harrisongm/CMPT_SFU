#include <iostream>
#include <sstream>
#include <ctime>
using namespace std;

struct Point
{
    double x, y;
};

struct Line
{
    Point start, end;
};

Line getLineObject()
{
    Line line;

    line.start.x = ((1.0*rand())/RAND_MAX);

    line.start.y = ((1.0*rand())/RAND_MAX);

    line.end.x = ((1.0*rand())/RAND_MAX);

    line.end.y = ((1.0*rand())/RAND_MAX);

    return line;
}

// convert x and y
string toString(const Point &point)
{
	stringstream ss;
	ss << "(" << point.x << ", "<< point.y << ")";
	string s = ss.str();
	return s;
}

string toString(const Line& line)
{
    stringstream ss;

    ss << toString(line.start) << "---" << toString(line.end);

    return ss.str();
}

//missing functions
double getLineLength(Line line){
	double len = sqrt((line.end.x - line.start.x)*(line.end.x - line.start.x) + (line.end.y - line.start.y)*(line.end.y - line.start.y));
	return len;
}

Line getLongestLine(Line *line, int size){
	Line longest = line[0];
	for(int i = 0; i < size; i++)
	{
		double Linelength = getLineLength(line[i]);
		if(Linelength > getLineLength(line[0]))
			longest = line[i];
	}
	return longest;
}


int main()
{
    //Read a user desired array size
    int size;

    do
    {
    cout << "Enter a positive integer array size: ";
    cin >> size;
    }while (size <= 0);

 

    //Create an array of Line objects with the user desired size

    Line *L = new Line[size];

 

    //Seed the random number generator

    srand(time(0));

 

    //Initialize each Line object

    for (int i = 0; i < size; i++)
        L[i] = getLineObject();

    //Print the line objects

    for (int i = 0; i < size; i++)
        cout << "Line at index " << i << " is " << toString(L[i]) << endl;
    //Compute and print the length of the line object at index 0

    double len = getLineLength(L[0]);

    cout << "The length of the line object at index 0 is " << len << endl;

 

    //Compute the longest line and print it

    Line longest = getLongestLine(L, size);

    cout << "The longest line among all the line objects in the array is " << toString(longest) << endl;

 

    //Delete the dynamic array

    delete[] L;

    system("Pause");
    return 0;
}
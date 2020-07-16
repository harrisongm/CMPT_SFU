#include <iostream>
using namespace std;

void figure_me_out(int& x, int y, int& z)
{
	cout << "Entering function: " << x << ", " << y << ", " << z << endl;
	x = 1;
	y = 2;
	z = 3;
	cout << "Exiting function: " << x << ", " << y << ", " << z << endl;
}

int main()
{
	int a = 10, b = 20, c = 30;
	cout << "Main program before function call: " << a << ", " << b << ", " << c << endl;
	figure_me_out(a, b, c);
	cout << "Main program after function call: " << a << ", " << b << ", " << c << endl;

	system("pause");
	return 0;
}

/*
result:
Main program before function call: 10, 20, 30
Entering function: 10, 20, 30
Exiting function: 1, 2, 3
Main program after function call: 1, 20, 3
*/
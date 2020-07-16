#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = 3;
	bool x1 = a == b;
	bool x2 = a != b;
	bool x3 = a > b;
	bool x4 = a >= b;
	bool x5 = a < b;
	bool x6 = a <= b;

	cout << "Value of x1="<<x1<< endl;
	cout << "Value of x2="<<x2<< endl;
	cout << "Value of x3="<<x3<< endl;
	cout << "Value of x4="<<x4<< endl;
	cout << "Value of x5="<<x5<< endl;
	cout << "Value of x6="<<x6<< endl;

	system("Pause");
	return 0;
}
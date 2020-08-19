#include <iostream>
using namespace std;

void magic(int& a, int* b, int c)
{
	c = a;
	*b = a + c;
	a = c * *b;
}

int main()
{
	int a = 6, b = 8, c = 10;
	cout << a << " " << b << " " << c << endl;
	magic(b, &a, c);
	cout << a << " " << b << " " << c << endl;
	system("pause");
	return 0;
}
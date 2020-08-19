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
	int x = 6, y = 8, z = 10;
	cout << x << " " << y << " " << z << endl;
	magic(y, &x, z);
	cout << x << " " << y << " " << z << endl;

	system("pause");
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int a = 5,b = 7;
	cout<<++a<<","<<b++<<endl;
	cout<<a--<<","<<++b<<endl;
	cout<<++a<<","<<--b<<endl;
	cout<<a--<<","<<b++<<endl;
	cout<<++a+ b++ << endl;
	cout<<a--+ ++b << endl;
	int c = a++ + ++b << endl;
	cout<<c<<endl;
	c = a-- - --b;
	cout<<c<<endl;
	c = c++ - ++a + --b;
	cout<<c<<endl;

	system("pause");

	return 0;
}
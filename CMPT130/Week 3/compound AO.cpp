#include <iostream>

using namespace std;

int main()
{
	int a = 5, b = 3, c = 7;

	cout<<"At first the value of a, b, and c are:";
	cout<<a ,","<<b<< ", and" <<c<<endl;

	a -= b;		//a becomes 2
	b *= c;		//b becomes 21
	c += a;		//c becomes 9
	a /= b;		//a becomes 0
	b %= c;		//b becomes 3

	cout << "At last the values of a, b, c are:";
	cout <<a<< "," <<b<< ", and" <<c<< endl;

	system("pause");
	return 0;
}
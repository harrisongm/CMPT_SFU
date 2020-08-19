#include <iostream>

using namespace std;

int main()
{
	int a = 25;
	int b = 4;
	cout<<a/b<<endl;
	cout<<static_cast<float>(a)/b<<endl;
	cout<<a/static_cast<float>(b)<<endl;
	cout<<static_cast<float>(a)/static_cast<float>(b)<<endl;
	cout<<static_cast<float>(a/b)<<endl;
	cout<<a<<","<<b<<endl;
	float result = a/b;
	cout<<result<<endl;
	result = static_cast<float>(a/b);
	cout<<result<<endl;
	int c = static_cast<float>(a)/b;
	cout<<c<<endl;
	c = a/static_cast<float>(b);
	cout<<c<<endl;
	result = static_cast<float>(a)/static_cast<float>(b);
	c = static_cast<float>(a)/static_cast<float>(b);
	cout<<result<<" "<<c<<endl;

	system("pause");

	return 0;
}
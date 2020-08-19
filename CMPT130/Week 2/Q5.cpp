#include <iostream>

using namespace std;

int main()
{
	int a = 5;
	int b = 3;
	int result = a/b;
	cout<<result<<endl;
	
	result = a*1.0/b;
	cout<<result<<endl;
	
	result = a+1.0/b;
	cout<<result<<endl;

	result = (a+1.0)/b;
	cout<<result<<endl;

	result = a+(1.0/b);
	cout<<result<<endl;

	result = a/1.0*b;
	cout<<result<<endl;

	result = a/1.0+b;
	cout<<result<<endl;

	result = a+4/b;
	cout<<result<<endl;

	result = a+b*(a-b)/b%a;
	cout<<result<<endl;

	system("pause");

	return 0;

}
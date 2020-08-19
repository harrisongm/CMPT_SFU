#include <iostream>

using namespace std;

int main()
{
	float a = 3.6, b = 2.5, c = -7.5;
	cout<< "a="<<a<<",b="<<b<<", and c="<<c<< endl;
	bool var1 = a > b;	//var1 is not true
	cout<< "var1 = a > b gives the result var1 = " << var1 << endl;
	bool var2 = b*c >= a;
	cout<< "var2 = b*c >= a gives the result var2 = "<<var2<< endl;
	bool var3 = var1 && var2;
	cout<< "var3 = var1 && var2 gives the result var3 = "<<var3<< endl;
	bool var4 = var1 || var2;
	cout<< "var4 = var1 || var2 gives the result var4 = "<<var3<< endl;

	cout<< "var4 = var1 || var2 gives the result var4 = "<< var4 << endl;
	cout<< "The expression !(a >c) is evaluated to "<<!(a < c) << endl;
	cout<< "The expression (b > a) is valuated to "<<(b > a)<< endl;
	cout<< "The expression ((!(a > c)) && var1 || !var3 && (b > a)) is evaluated to "<<((!(a > c)) && var1 || !var3 && (b > a)) << endl;

	system("pause");
	return 0;
}
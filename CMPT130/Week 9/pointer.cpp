#include <iostream>
using namespace std;

int main()
{
    int a = 8;
    int *b = &a;
    cout << "Value of a \t a = " << a << endl;
    cout << "Address of a \t &a = " << &a << endl;
    cout << "Value of b \t b = " << b << endl;
    cout << "Address of b \t &b" << &b << endl;
    cout << "Data in memory pointed by pointer *b = " << *b << endl;

    int d = a + *b;
    cout << "Value of d \t d = " << d << endl;
    *b = 10;
    cout << "Data in memory pointed to by pointer *b = " << *b << endl;
    cout << "More importantly, a is now a = " << a << endl;

    system("pause");
    return 0;
}
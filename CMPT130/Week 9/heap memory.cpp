#include <iostream>
using namespace std;

int main()
{
    //create a pointer
    int *p;
    //create a dynamic memory on the heap and point to it by p.
    p = new int;
    //assign an integer value to the heap eight hexadecimal digits
    *p = 6;
    //print the value of p. This will print eight hexadecimal digits
    cout << "The value of the pointer variable p is " << p << endl;
    //print the value in the heap memory pointed to by p. This will print 6
    cout << "The value of the dereference pointer variable p is " << *p << endl;

    delete p;
    cout << "The value of the pointer variable p is " << p << endl;
    cout << "The value of the dereference pointer variable p is " << *p << endl;

    int a = 3;
    p = &a;
    cout << "The value of the pointer variable p is " << p << endl;
    cout << "The value of the dereference pointer variable p is " << *p << endl;

    system("pause");
    return 0;
}
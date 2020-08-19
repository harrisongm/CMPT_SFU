#include <iostream>
#include <string>
using namespace std;

int main()
{
    //test how to define string s1, s2, s3
    string s1, s2, s3 = "Nice";
    s1 = "How";
    s2 = s1;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << "Enter a string: ";
    cin>>s1;
    s3 = "Bye";
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;

    //test .length()
    int a = s1.length();
    cout << "The length of string s1:" << s1 << " is:" << a << endl;
    cout << "The length of string s2:" << s2 << "is" << s2.length() << endl;

    //test strings concatention
    string s4 = "stop";
    string s5 = "now";
    char c = ' ';
    string s6 = s4 + c + s5 + "please";
    cout << s6 << endl;

    system("pause");
    return 0;
}
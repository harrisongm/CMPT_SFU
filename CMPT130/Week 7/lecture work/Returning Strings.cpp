#include <iostream>
#include <string>
using namespace std;

string foo(string s)
{
    s = s + " now";
    return s;
}

int main()
{
    string s1 = "stop";
    string s2 = foo(s1);
    cout << s2 << endl;
    cout << s1 << endl;

    system("pause");
    return 0;
}
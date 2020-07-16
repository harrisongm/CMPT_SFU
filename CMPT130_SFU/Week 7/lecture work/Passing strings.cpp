#include <iostream>
#include <string>
using namespace std;

void modifyString(string s)
{
    s = s + "now";
    return;
}

int main()
{
    string s = "stop";
    cout << s << endl;
    modifyString(s);
    cout << s << endl;

    system("pause");
    return 0;
}
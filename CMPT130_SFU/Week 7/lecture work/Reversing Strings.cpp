#include <iostream>
#include <string>
using namespace std;

string getReversedString(string s)
{
    string x = "";
    for(int i = s.length()-1; i >= 0; i--)
        x = x + s[i];
    return x;
}
/*2nd example
string getReversedString(string s)
{
    string x = "";
    for(int i = 0; i < s.length(); i++)
        x = s[i] + x; You cannot write this as X += s[i]
    return x;
}
*/

int main()
{
    string s1 = "stop";
    string s2 = getReversedString(s1);
    cout << s2 << endl;

    system("pause");
    return 0;
}
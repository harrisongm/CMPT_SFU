#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "mark";
    string s2 = "markos";
    string s3 = "Zack";
    bool a1 = s1 == s2;
    bool a2 = s1 > s2;
    bool a3 = s1 >= s2;
    bool a4 = s1 < s2;
    bool a5 = s1 <= s2;
    bool a6 = s1 != s2;
    cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << " " << a6 << endl;
    bool a7 = s3 > s1;
    cout << a7 << endl;

    system("pause");
    return 0;
}
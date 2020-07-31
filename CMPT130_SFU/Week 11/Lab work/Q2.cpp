#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2 = "Koopa";
    s1 = "instructor";
    string s3 = s1 + s2;
    cout << s3 << endl;

    char* C1;
    char C2[] = "Koopa";
    C1 = "instructor";
    char* C3 = C1 + C2;
    cout << C3 << endl;

    system("pause");
    return 0;
}
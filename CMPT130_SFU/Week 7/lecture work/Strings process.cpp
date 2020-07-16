#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "stop";
    cout << "The characters of " << s1 << " are: ";
    for(int i = 0; i < s1.length(); i++)
        cout << s1[i] << " ";
    cout << endl;

    string s2 = "This is nice";
    cout << "The characters of " << s2 << " are: ";
    for(int i = 0; i < s2.length(); i++)
        cout << s2[i] << " ";
    cout << endl;

    //Modify some elements of strings
    s1[0] = 'A';
    s1[s1.length()-1] = 'm';
    cout << "After modifying s1, we get " << s1 << endl;

    system("pause");
    return 0;
}
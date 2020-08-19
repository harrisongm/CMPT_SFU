#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Demonstrating an infinite C++ while loop." << endl;
    cout << "Please enter an integer";
    cin >> n;
    int k = 0;
    while (k <= n)
    {
        cout << "The value of k is " << k << endl;
        k+1;    //This will cause program going wrong.
    }

    system("pause");
    return 0;
}
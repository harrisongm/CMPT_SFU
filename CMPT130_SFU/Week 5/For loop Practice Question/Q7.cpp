#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter an integer number greater than 1." << endl;
    cin >> n;
    if (n < 1)
    {
        cout << "The number you type in is not greater than 1." << endl;
        cin >> n;
    }
    int i, bool flag = true;
    for (i = 2; n > i; i++)
    {
        if (n%i == 0)
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "The number is prime." << endl;
    }
    else
    {
        cout << "The number is not prime." << endl;
    }
    system("pause");
    return 0;
}
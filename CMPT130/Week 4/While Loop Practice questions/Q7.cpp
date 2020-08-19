#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please inter an integer bigger than 1." << endl;
    cin >> n;
    while (n<=1)
    {
        cout << "You need to enter an integer bigger than 1." << endl;
        cin >> n;
    }

    int i = 2;
    bool flag = true; //set a flag variable.

    while (n > i)
    {
        if (n%i == 0)
        {
            flag = false;
        }
        i++;

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
}
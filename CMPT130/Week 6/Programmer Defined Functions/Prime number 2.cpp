#include <iostream>
using namespace std;

bool isPrime(int x)
{
    bool check = true;
    for (int k = 2; k < x; k++)
    {
        if (x%k == 0)
        {
            check = false;
            break;
        }
    }
    return check;
}
int main()
{
    int n;
    cout << "Please enter a positive integer greater than 1:";
    cin>>n;
    if (n <= 1)
        cout << "Please enter a correct integer." << endl;
    else
    {
        bool answer = isPrime(n);
        if (answer == true)
            cout << "The number is prime." << endl;
        else
        {
            cout << "The number is not prime." << endl;
        }
    }
    system("pause");
    return 0;
}
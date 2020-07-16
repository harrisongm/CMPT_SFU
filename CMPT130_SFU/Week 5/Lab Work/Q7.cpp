#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive integer number." << endl;
    cin>>n;
    if (n < 0)
    {
        cout << "POSITIVE NUMBER?" << endl;
        cin>>n;
    }
    int product = 1;
    for(int i = 1; i < n; i++)
    {
        product *= i;
    }
    cout << "The product from 1 to the number you enter is:" << product << endl;
    system("pause");
    return 0;
}
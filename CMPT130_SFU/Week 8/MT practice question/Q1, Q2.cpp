#include <iostream>
using namespace std;

bool isPrime(int x)
{
    bool check = true;
    for(int i = 2; i < x; i++)
    {
        if(x%i == 0)
        {
            check = false;
            break;
        }
    }
    return check;
}

int sumOfPrimes(int n)
{
    int k = 2;
    int i = 1;
    int sum = 0;
    while(i < n)
    {
        if (isPrime(k) == true)
        {
            sum += k;
            k++;
            i++;
        }
        else
        {
            k++;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Plese enter an integer greater than 1." << endl;
    cin>>n;
    if (n < 1)
    {
        cout << "It is not greater than 1." << endl;
        cin>>n;
    }
    
    cout << "The sum of " << n << "numbers is " << sumOfPrimes(n) << endl;

    system("pause");
    return 0;
}
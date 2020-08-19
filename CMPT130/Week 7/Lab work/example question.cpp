#include <iostream>
using namespace std;

bool isPrime(const int x)
{
    for(int i = 2; i < x; i++)
        if(x % i == 0)
            return false;
    return true;
}

void printPrimes(const int a, const int b)
{
    for(int k = a; k <= b; k++)
    {
        if(isPrime(k) == true)
            cout << k << endl;
    }
}

int main()
{
    int a, b;
    cout << "Enter two positive integers ";
    cin>>a>>b;

    if(a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    cout << "All the prime numbers between the numbers inclusive are ..." << endl;
    printPrimes(a, b);

    system("pause");
    return 0;
}
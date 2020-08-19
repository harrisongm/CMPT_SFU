//isSumofTwoPrimes
#include <iostream>
using namespace std;

bool check_prime(int n)
{
    if(n == 1)
        return false;

    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

bool isSumOfTwoPrimes(int n)
{
    //help find prime numbers
    for(int i = 2; i < n; i++)
    {
        if(check_prime(i))
        {
            for(int j = i+1; j < n; j++)
            {
                if(check_prime(j))
                {
                    if(i + j == n)
                        return true;
                }
            }
        }
    }
    return false;
}
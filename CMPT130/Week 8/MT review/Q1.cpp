//Euclidean algorithm
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    int small;
    if(a >= b)
        small = b;
    else
    {
        small = a;
    }
    int i =small;
    for(; i > 0; i--)
    {
        if(a%i == 0 && b%i == 0)
        {
            break;
        }
    }
    return i;
}

int main()
{
    int n1;
    int n2;
    cin>>n1>>n2;
    cout << GCD(n1, n2) << endl;

    system("pause");
    return 0;
}

/*common answer
int GCD(int n1, int n2)
{
    //set n1 is smaller integer.
    if(n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    //find common divisor from smaller integer.
    for(int i = n1; i > 0; i--)
    {
        if(n1%i == 0 && n2%i == 0)
            return i;
    }
}
*/
/*2nd answer
int gcd = 1;
for(int i = 1; i <= n1; i++)
{
    if(n1%i == 0 && n2%i == 0)
    gcd = i;
}
return gcd;
*/
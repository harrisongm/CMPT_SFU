#include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    int num1 = 0, num2 = 1, num3 = num1 + num2;

    for(int i = 2; i < n; i++)
    {
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    return num3;
}

int main()
{
    int n = 0;
    for(int i = 2; i >= 0; i--)
    {
        for(int j = -2; j <= 2; j++)
        {
            if(i <= j+2 && i <= -j+2)
            {
                cout << fib(n);
                n++;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
//Fibonacci get largestlessthan
#include <iostream>
using namespace std;

int largestFibLessThan(int x)
{
    int original = 0;
    int temp = 1;
    int result = 0;
    if(x == 1)
        return 0;

    while(result < x)
    {
        result = original + temp;
        original = temp;
        temp = result;
    }
    return original;
}
/* answer
int largestFibLessThan(int n)
{
    int num1 = 0;
    int num2 = 1;
    int num3 = num1 + num 2;
    if(n == 1)
        return 0;

    while(num3 < n)
    {
        //update
        num1 = num2;
        num2 = num3;
        num3 = num1 + num2;
    }
    return num2;
}
*/
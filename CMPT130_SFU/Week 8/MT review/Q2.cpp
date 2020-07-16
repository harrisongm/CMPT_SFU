//second_largest_factor
#include <iostream>
using namespace std;

int scond_largest_factor(int num)
{
    int count = 0;
    for(int i = num -1; i > 1; i--)
    {
        if(num%i == 0)
            count++;

        else if(num%i == 0 && count == 1)
            return i;
    }
    return 1;
}
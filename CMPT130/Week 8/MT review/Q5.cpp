//printUniqueThreeDigits using 1,2,3,4
#include <iostream>
using namespace std;

int printUniqueThreeDigits()
{
    int count = 0;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            if (i == j)
                continue;
            for(int k = 1; k <= 4; k++)
            {
                if(k == i || k == j)
                    continue;
                int num = i * 100 + j * 10 + k;
                cout << num << " ";
                count++;
            }
        }
    }
    return count;
}
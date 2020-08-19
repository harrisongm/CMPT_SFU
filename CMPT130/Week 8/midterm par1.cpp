//part1
#include <iostream>
using namespace std;

//a
int prodDigits(int x)
{
    int product = 1;
    int temp;
    while(true)
    {
        temp = x % 10;
        product *= temp;

        if(temp == 0)
        break;
    }
    return product;
}

//b
int findIndex(arr[arr_size], const int arr_size, int startIndex, int elem)
{
    for(int i = arr_size; i > 0; i--)
    {
        int count = 0;
        int temp = arr[startIndex];
        if(temp == elem)
        {
            count++;
        }
        startIndex++;
        if(startIndex - 1 == arr_size)
        {
            if(count == 0)
            {
                count = -1;
            }
            break;
        }
           
    }
    return count;
}

//c
int multiPersist(int n)
{
    int temp;
    int product = 1;
    int count = 0;
    while(true)
    {
        temp = n%10;
        product *= temp;
        arr[j] = temp;
        
        if(product < 10)
            break;
        
        count++;
    }
    return count;
}
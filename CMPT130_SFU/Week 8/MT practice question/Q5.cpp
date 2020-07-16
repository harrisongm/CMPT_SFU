#include <iostream>
using namespace std;

void rotateArr(int arr[], int size)
{
    int temp = arr[0];
    for(int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size - 1] = temp;
}
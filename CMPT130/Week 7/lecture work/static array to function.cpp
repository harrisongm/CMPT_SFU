#include <iostream>
using namespace std;

void populateArray(float arr[], const int size)
{
    for(int i = 0; i < size; i++)
        arr[i] = (1.0 * rand()) / RAND_MAX * 2 - 1;
}
int countNegative(const float myArray[], const int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
        count += myArray[i] < 0 ? 1 : 0;
    return count;
}
void printArray(const float A[], const int mySize)
{
    for(int i = 0; i < mySize; i++)
        cout << A[i] << endl;
    int num = countNegative(A, mySize);
    cout << "The array contains " << num << " negative elements" << endl;
    cout << "The array contains " << mySize-num << " non-negative elements" << endl;
}
void doubleArrayElements(float x[], const int arraySize)
{
    for(int i = 0; i < arraySize; i++)
        x[i] = 2 * x[i];
}
int main()
{
    const int SIZE = 5;
    float X[SIZE];
    populateArray(X, SIZE);
    cout << "Originally, the array elements are" << endl;
    printArray(X, SIZE);
    doubleArrayElements(X, SIZE);
    cout << "After doubling the array elements, the array elements are" << endl;
    printArray(X, SIZE);
    
    system("pause");
    return 0;
}
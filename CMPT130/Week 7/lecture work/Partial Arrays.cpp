#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void populateArray(float X[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        X[i] = float(rand())/RAND_MAX * 10 - 5;
    }
}

void printArray(const float myArray[], const int mySize)
{
    for (int i = 0; i < mySize; i++)
        cout << myArray[i] <<" ";
    cout << endl;
}

float findElement(const float arr[], const int num)
{
    float ans = arr[0];
    for(int i = 1; i < num; i++)
        if(abs(arr[i]) < abs(ans))
            ans = arr[i];
    return ans;
}

int main()
{
    const int SIZE = 50;
    float A[SIZE];

    int number_of_elements;
    do
    {
        cout << "Enter the number of elements: ";
        cin >> number_of_elements;
    } while (number_of_elements < 1 || number_of_elements > SIZE);
    
    populateArray(A, number_of_elements);

    printArray(A, number_of_elements);

    float x = findElement(A, number_of_elements);
    cout << "The element nearest to zero is " << x << endl;

    system("pause");
    return 0;
}
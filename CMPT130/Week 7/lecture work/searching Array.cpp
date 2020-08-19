#include <iostream>
#include <cstdlib>
using namespace std;

int sequentialSearch(const int A[], const int size, const int searchValue)
{
    for(int i = 0; i < size; i++)
    {
        if(A[i] == searchValue)
            return i;
        
        else
        {
            continue;
        }
    }
    return -1;
}

int main()
{
    const int myArraySize = 15;
    int X[myArraySize];
    for(int i = 0; i < myArraySize; i++)
    {
        X[i] = rand()%20;
    }
    for(int i = 0; i < myArraySize; i++)
    {
        cout << X[i] << " ";
    }
    cout << endl;

    int s = 4;
    int m = sequentialSearch(X, myArraySize, s);

    if(m == -1)
        cout << s << " is not found in the array." << endl;
    else
    {
        cout << s << " is found in the array at index " << m << endl;
    }
    system("pause");
    return 0;
}
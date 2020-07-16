#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int A[10];
    srand(time(0));
    for(int i =0; i < 10; i++)
        A[i] = rand() % 21 + 5;
    for(int i = 0; i < 10; i++)
        cout << "Element at index "<< i << " = " << A[i] << endl;
    
    int s = 0;
    for(int i = 0; i < 10; i++)
        s += A[i];
    cout << "The sum of all the elements of the array is " << s << endl;
    
    int e = 0, o = 0;
    for (int i = 0; i < 10; i++)
        A[i] % 2 == 0 ? e++ : o++;
    cout << "The array has " << e << " even and " << o << " odd elements." << endl;
    
    for(int i = 0; i < 10; i++)
    {
        cout << "Enter a value for the element at index " << i << ": ";
        cin>>A[i];
    }
    for(int i = 0; i < 10; i++)
    cout << "Element at index " << i << " = " << A[i] << endl;
    
    int minimum = A[0];
    for(int i = 1; i < 10; i++)
    if(A[i] < minimum)
        minimum = A[i];
    cout << "The minimum element is " << minimum << endl;

    system("pause");
    return 0;
}
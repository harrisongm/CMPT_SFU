//wrong example
#include <iostream>
using namespace std;

int countEven(int arr[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] = 2*(arr[i]/2))
            count++;
    }
    return count;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    cout << "Originally the elements of the array are" << endl;
    for(int i = 0; i < 5; i++)
        cout << A[i] << endl;
    int m = countEven(A, 5);
    cout << "There are " << m << " even numbers in the array." << endl;
    cout << "After the function call, the elements of the array are " << endl;
    for(int i = 0; i < 5; i++)
        cout << A[i] << endl;
    
    system("pause");
    return 0;
}

//right example
#include <iostream>
using namespace std;

int countEven(const int arr[], const int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] = 2*(arr[i]/2))
            count++;
    }
    return count;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    cout << "Originally the elements of the array are" << endl;
    for(int i = 0; i < 5; i++)
        cout << A[i] << endl;
    int m = countEven(A, 5);
    cout << "After the function call, the elements of the array are" << endl;
    for(int i = 0; i < 5; i++)
        cout << A[i] << endl;
    
    system("pause");
    return 0;
}
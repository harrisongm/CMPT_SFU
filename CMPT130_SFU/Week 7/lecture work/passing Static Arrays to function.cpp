#include <iostream>
using namespace std;

void doubleArrayElements(float x[], int size)
{
    for(int i = 0; i < size; i++)
        X[i] = 2 * X[i];
    return;
}
int main()
{
    float A[] = {0.1, 0.2, 0.3, 0.4, 0.5};
    cout << "Originally the elements of the array are" << endl;
    for(int i = 0; i < 5; i++)
        cout << A[i] <<" ";
    cout << endl;

    doubleArrayElements(A, 5);

    cout << "After the function call the elements of the array are" << endl;
    for (int i = 0; i < 5; i++)
        cout << A[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}
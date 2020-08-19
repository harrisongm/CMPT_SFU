#include <iostream>
#include <ctime>

using namespace std;

int Sum(int* p, int size)
{
    for(int i = 0; i < size; i++)
        p[i] = rand()%10 /RAND_MAX; //p[i] = rand()%21 - 10;
    int sum = 0;
    for(int j = 0; j < size; j++)
        sum += p[j];
    return sum;
}

int main()
{
    int size;
    cin>>size;
    int* arr = new int[size];
    srand(time(0));
    cout << Sum(arr, size) << endl;
    delete[] arr;
    system("pause");
    return 0;
}
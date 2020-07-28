#include <iostream>
#include <ctime>

using namespace std;

bool isFound(int* p, int size, int num)
{
    for(int i = 0; i < size; i++)
    {
        if(p[i] = num)
            return true;
    }
    return false;
}

int main()
{
    srand(time(0));
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++)
        arr[i] = rand()%10;
    int num = rand()%10;
    if(isFound(arr, size, num) == true)
        cout << "number：" << num << "Founded.";
    else
        cout << "number：" << num << "didn't Founded.";
    system("pause");
    return 0;
}
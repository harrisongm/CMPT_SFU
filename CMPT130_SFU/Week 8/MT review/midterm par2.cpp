//part 2
#include <iostream>
#include <ctime>
#include <cstdlib>
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
int findIndex(int arr[], const int arr_size, int startIndex, int elem)
{
    int count = 0;
    for(int i = arr_size; i > 0; i--)
    {
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

//d
void multiPersist(int arr[], const int arr_size)
{
    int temp;
    int j = 0;
    int startIndex = 0;
    for(int i = arr_size; i > 0; i--)
    {
        arr[j] = multiPersist(arr[j])
    }
}

int main()
{
    const int arr_size = 1000;
    int arr[arr_size];
    srand(time(0));
    for(int i = 1000; i > 0; i--)
    {
        arr[i] = rand()%1000;
    }

    for(int j = 0; j < 1000; j++)
    {
        int temp;
        int product = 1;
        int count = 0;
        while(true)
        {
            temp = arr[j]%10;
            product *= temp;
            arr[j] = temp;
        
            if(product < 10)
            break;
        
            count++;
        }
        arr[j] = count;
    }

    cout << findIndex(arr[1000], 1000, 0, 5) << endl;

    system("pause");
    return 0;
}
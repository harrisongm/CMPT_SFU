#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool isPrime(int x)
{
    if(x == 2)
        return true;
    if(x == 1)
        return false;

    int temp;
    for(temp = 2; temp < x; temp++)
    {
        if(x%temp == 0)
            return false;
    }
    return true;
}

int main()
{
    const int i = 10;
    int arr[i];
    
    srand(time(0));
    for(int j = 0; j < 10; j++)
        arr[j] = rand();

    int prime_count = 0;
    for(int k = 0; k < 10; k++)
    {
        if(isPrime(arr[k]) == true)
            prime_count++;
    }
    cout << "There are " << prime_count << " of prime number." << endl;
    system("pause");
    return 0;
}
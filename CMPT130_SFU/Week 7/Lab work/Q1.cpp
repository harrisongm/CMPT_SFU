#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int i = 10;
    int arr[i];
    srand(time(0));
    for(int t = 0; t < 10; t++)
    {
        int temp = rand();
        arr[t] = temp;
    }

    int even_count = 0, odd_count = 0;
    for(int j = 0; j < 10; j++)
    {
        if(arr[j] == 0)
            continue;

        else if(arr[j]%2 == 0)
            even_count++;
        else
        {
            odd_count++;
        }
    }
    cout <<"There are " << even_count << " of even number." << endl;
    cout <<"THere are " << odd_count << " of odd number." << endl;

    system("pause");
    return 0;
}
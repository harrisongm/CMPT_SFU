#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    const int i = 10;
    float arr[i];
    srand(time(NULL));
    for(int j = 0; j < 10; j++)
    {
        arr[j] = (rand()%3-1) + (float)(rand()%10/10000.0);
        cout << arr[j] << " ";
    }
    int neg_count = 0;
    for(int k = 0; k < 10; k++)
    {
        if(arr[k] < 0)
            neg_count++;
    }
    cout << "There are " << neg_count << " of negative number.";
    system("pause");
    return 0;
}
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int a = rand()%100 + 1;
    cout << a <<" ";
    while(true)
    {
        int next = rand()%100 + 1;
        cout << next << " ";
        if(abs(a - next) < 5)
            break;
        
        a = next;
    }
    system("pause");
    return 0;
}
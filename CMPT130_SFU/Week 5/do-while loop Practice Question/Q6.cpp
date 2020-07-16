#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    do
    {
        cout << n <<" ";
        n = n + 3;
    }while (41%n != 0);
    
    system("pause");
    return 0;
}
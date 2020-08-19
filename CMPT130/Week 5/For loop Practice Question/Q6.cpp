#include <iostream>
using namespace std;

int main()
{
    for (int n = 7; 41%n != 0; n = n + 3)
    {
        cout << n <<" ";
    }
    system("pause");
    return 0;
}
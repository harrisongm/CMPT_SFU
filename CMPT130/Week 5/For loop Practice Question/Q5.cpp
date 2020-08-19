#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two positive integer number as the range in random." << endl;
    cin >>a>>b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int n = rand()%15-10;
    while (a < n < b)
    {
        cout << n << " ";
    }
    system("pause");
    return 0;
}
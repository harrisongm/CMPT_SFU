#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer as how many times need to random." << endl;
    cin >> n;
    int t = 0;
    int min;
    for (int i = rand()%10-10; t <= n; t++)
    {
        if (i < min)
            i = min;
    }
    cout << "The minimum number during the random is:" << min << endl;
    system("pause");
    return 0;
}
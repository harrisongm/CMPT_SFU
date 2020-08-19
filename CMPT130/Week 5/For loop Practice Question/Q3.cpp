#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer as how many times need to random." << endl;
    cin >> n;
    int t = 0;
    for (int i = rand()%10-10; t <= n; t++)
    {
        cout << i <<" ";
    }
    system("pause");
    return 0;
}
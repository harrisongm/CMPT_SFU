#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a number." << endl;
    cin >> n;
    int k = 0;
    do
    {
        cout << k << endl;
        k = k + 1;
    } while (k <= n);
    
    system("pause");
    return 0;
}
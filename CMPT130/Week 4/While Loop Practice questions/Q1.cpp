#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter an integer";
    cin >> n;
    int k = 0;

    while (k <= n)
    {
        cout << k << endl;
        k = k + 2;
    }

    system("pause");
    return 0;
}
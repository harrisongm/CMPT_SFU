#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive integer." <<endl;
    cin >> n;
    for (; n > 0; n--)
    {
        cout << n <<" ";
    }
    system("pause");
    return 0;
}
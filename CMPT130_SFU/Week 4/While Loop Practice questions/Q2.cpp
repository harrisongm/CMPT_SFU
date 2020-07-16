#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "please enter an integer" << endl;
    cin >> n;
    cout <<n<<" ";

    while (n > 0)
    {
        n = n - 1;
        cout <<n<<" ";
    }
    system("pause");
    return 0;
}
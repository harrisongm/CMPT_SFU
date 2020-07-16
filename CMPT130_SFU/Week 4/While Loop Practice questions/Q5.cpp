#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;
    cout << "Please enter two integer." << endl;
    cin >> a >> b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int i = rand()%15-10;
    int n = 0;
    while (n < 5)
    {
        if (a < i < b)
        cout<<i<<" ";

        n++;
    }
    system("pause");
    return 0;
}
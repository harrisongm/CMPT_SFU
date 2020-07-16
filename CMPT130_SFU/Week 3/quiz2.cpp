#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int x, y;
    cout << "Please enter two integer x, y." << endl;
    cin >> x >> y;
    
    if (x > y)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    int n = (x-1) + rand() % (y + 1);
    cout << "The result is:" << n << endl;

    system("pause");
    return 0;
}
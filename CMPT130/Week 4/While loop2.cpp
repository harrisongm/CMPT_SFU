#include <iostream>

using namespace std;

int main()
{
    int count = 0, n;

    while(count < 1)
    {
        cout << "Enter a number:";
        cin >> n;

        if (n >= 0)
        count = count + 1;
    }

    system("pause");
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int k = 5;
    while (k)
    {
        k *= -1;
        cout << k << endl;
        k > 0 ? k -- : k++;
    }

    system("pause");
    return 0;
}
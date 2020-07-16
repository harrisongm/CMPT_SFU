#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= -5; i--)
    {
        for(int j = -5; j <= 5; j++)
        {
            if(i <= j+5 && i >= -j-5 && i >= j-5 && i <= -j+5)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
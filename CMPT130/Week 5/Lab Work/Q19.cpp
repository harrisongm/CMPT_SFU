#include <iostream>
using namespace std;

int main()
{
    for(int i = 5; i >= -5; i--)
    {
        int n = 1;
        for(int j = -5; j <= 5; j++)
        {
            if(i <= j+5 && i >= j-5 && i <= -j+5 && i >= -j-5)
            {
                if(j <= 0)
                {
                    cout<<n;
                    n++;
                }
                else
                {
                    n--;
                    cout<<n;
                }
                if(j == 0)
                    n--;
            }
            else
            {
                cout << " ";
            }   
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
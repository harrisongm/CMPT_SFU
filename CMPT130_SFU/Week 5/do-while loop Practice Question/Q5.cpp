#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int i = 0;
    cout << "Please enter two integer numbers as the range." << endl;
    cin >>a>>b;
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (b-a < 25, a > -10)
    {
        int n = a;
        do
        {
            cout << n <<" ";
            i++;
        }while (i < b-a);
    }
    else if (b-a >=25, a <= -10)
    {
        int n = -9;
        do
        {
            cout << n <<" ";
            n++;
        }while (n < 14);
    }
    system("pause");
    return 0;
}
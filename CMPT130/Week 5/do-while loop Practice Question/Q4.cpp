#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, i;
    int t = 0;
    int sum = 0;
    int product = 1;
    int min = 10;
    cout << "Please enter how many times need to random." << endl;
    cin >> n;
    do
    {
        i = rand()%10-10;
        sum = sum + i;
        product = product * i;
        if (i < min)
        {
            min = i;
        }
        t++;
    }while (t < n);
    cout << "The sum of these numbers is:" << sum << endl;
    cout << "The product of these numbers is:" << product << endl;
    cout << "The minimum of these numbers is:" << min << endl;
    system("pause");
    return 0;
}
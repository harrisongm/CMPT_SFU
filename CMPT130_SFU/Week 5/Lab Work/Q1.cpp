#include <iostream>
using namespace std;

int main()
{
    int i, count = 0, sum = 0;
    do
    {
        cout << "Please enter an integer number:";
        cin >> i;
        sum += i;
        count++;
    }while (count < 10);
    cout << "The sum of the numbers is:" << sum << endl;
    system("pause");
    return 0;
}
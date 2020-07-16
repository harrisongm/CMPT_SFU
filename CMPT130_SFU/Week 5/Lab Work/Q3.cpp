#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, posi_sum = 0, nega_sum = 0, count = 0, posi_count = 0, nega_count = 0;
    do
    {
        cout << "Please enter an integer number:";
        cin >> i;
        sum += i;
        count++;
        if (i > 0)
        {
            posi_sum += i;
            posi_count++;
        }
        else if (i < 0)
        {
            nega_sum += i;
            nega_count++;
        }
    }while (count < 10);
    cout << "The sum of numbers is:" << sum << endl;
    cout << "The sum of the positive numbers is:" << posi_sum << endl;
    cout << "The sum of the negative numbers is:" << nega_sum << endl;
    cout << "The average of the  numbers is:" << sum/10 << endl;
    cout << "The average of the positive numbers is:" << posi_sum/posi_count << endl;
    cout << "The average of the negative numbers id:" << nega_sum/nega_count << endl;

    system("pause");
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter an integer number:";
    cin>>n;
    if (n < 0)
    {
        cout << "You must enter a positive number." << endl;
        cin>>n;
    }
    int i, sum = 0, even_sum = 0, odd_sum = 0, count = 0, even_count = 0, odd_count = 0;
    for (int t = 0;t < n; t++)
    {
        cout << "Please enter an integer number:";
        cin>>i;
        if (i > 0)
        {
            sum += i;
            count++;
            if (i%2 == 0)
            {
                odd_sum += i;
                odd_count++;
            }
            else
            {
                even_sum += i;
                even_count++;
            }
        }
        else
        {
            continue;
        }
    }
    cout << "The sum of all numbers is:" << sum << endl;
    cout << "The average of all numbers is:" << sum/count << endl;
    cout << "The sum of all even numbers is:" << even_sum << endl;
    cout << "The average of all even numbers is:" << even_sum/even_count << endl;
    cout << "The sum of all odd numbers is:" << odd_sum << endl;
    cout << "The average of all odd numbers is:" << odd_sum/odd_count << endl;

    system("pause");
    return 0;
}
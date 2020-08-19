#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int n = rand()%10 + 1;
    cout << "this program will read" << n << "input numbers and then print." <<endl;
    cout << "The sum, the product and the average of only the positive integer inputs." << endl << endl;
    int sum = 0, prod = 1, count = 0, num, i = 0;
    do
    {
        cout << "Enter an integer input: ";
        cin >> num;
        if (num <= 0)
        {
            i++;
            continue;
        }
        sum += num;
        prod *= num;
        count++;
        i++;
    }while (i < n);

    cout << "The sum of only the positive inputs is" << sum << endl;
    cout << "The product of only the positive inputs is" << prod << endl;
    if (count > 0)
        cout << "The average of only the positive inputs is" <<1.0*sum/count << endl;
    else
        cout << "You didn't enter any positive integer input. Therefore no average of positive inputs." << endl;
    
    system("pause");
    return 0;
}
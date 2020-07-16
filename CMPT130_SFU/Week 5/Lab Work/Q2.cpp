#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, count = 0;
    do
    {
        cout << "Please enter an integer number:";
        cin >> i;
        sum += i;
        count++;
    }while (count < 10);
    cout << "The average of the numbers is"<< sum/10 << endl;
    system("pause");
    return 0; 
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "Enter a non-negative number.";
    cin>>x; //Check if the user input value is non-negative.
    if (x < 0)
        cout << "Please enter a correct input value. Bye" << endl;
    else
    {
        double s = sqrt(x);
        cout << "The square root of "<< x << "is" << s << endl;
    }
    system("pause");
    return 0;
}
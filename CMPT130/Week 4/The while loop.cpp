#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive number ";
    cin >> n;
    
    int k = 0, val;
    int maxval = 0;
    while (k < n)
    {
        cout << "Enter a value:" << endl;
        cin >> val;

        if(k == 0)
        maxval = val;

        else if (val > maxval)
        {
            maxval = val;
        }
        k = k + 1;
    }

    system("pause");
    return 0;
}

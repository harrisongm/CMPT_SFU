#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n;
    cout << "Please enter a positive number as how many times can let program random numbers." << endl;
    cin >> n;
    int i = 0;
    int min = 11;
    while (i < n)
    {
        int t = rand()%10-10;
        if (t < min)
        {
            min = t;
        }
        i++;
    }
    cout << "The minimum number is:"<< min << endl;
     
    system("pause");
    return 0;
}
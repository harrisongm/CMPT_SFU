#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, i;
    int t = 0;
    cout << "Please enter how many times need to random." << endl;
    cin >> n;
    do
    {
        i = rand()%10-10;
        cout << i <<" ";
        t++;
    }while (t < n);

    system("pause");
    return 0;
}
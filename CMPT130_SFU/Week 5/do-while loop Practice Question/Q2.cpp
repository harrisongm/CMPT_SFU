#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter an positive integer." << endl;
    cin >> n;
    do
    {
        cout << n <<" ";
        n--;
    }while (n > 0);
    system("pause");
    return 0;
}
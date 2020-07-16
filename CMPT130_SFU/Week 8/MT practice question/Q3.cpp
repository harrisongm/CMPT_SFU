#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int myRandomNumber(int x)
{
    srand(time(0));
    x = rand()%101 - 1;
    return x;
}

int main()
{
    int a = 0;
    cout << "RandomNumber is:" << myRandomNumber(a) << endl;

    system("pause");
    return 0;
}
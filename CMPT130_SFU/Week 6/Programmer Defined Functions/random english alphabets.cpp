#include <iostream>
#include <ctime>
using namespace std;

char randomLowerCase()
{
    int x = rand()%26+97;
    char c = x;
    return c;
}
int main()
{
    srand(time(0));
    cout << "here are ten random lower case english alphabets." << endl;
    for (int i = 0; i < 10; i++)
        cout << randomLowerCase() << endl;
    system("pause");
    return 0;
}
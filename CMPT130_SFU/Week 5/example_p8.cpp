#include <iostream>
using namespace std;

int main()
{
    for (int i = 0, j = 10, z = 5; i <10 && j > 0 && z > 0; i++, --j)
    {
        cout << i << "\t" << j << "\t" << z << endl;
        z--;
    }
    system("pause");
    return 0;
}
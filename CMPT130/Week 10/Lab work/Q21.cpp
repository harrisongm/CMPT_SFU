#include <iostream>
#include <ctime>
using namespace std;

bool isFound(int *p, int size, int num)
{
	for(int i = 0; i < size; i++)
	{
		if(p[i] = num)
		{
			return true;
		}
	}
	return false;
}

int countElements(int* a, int* b, int size_a, int size_b)
{
    int count = 0;
    for(int k = 0; k < size_a; k++)
    {
        if(isFound(b, size_b, a[k]) == true)
            //if(a[k] == b[j])
            count += 1;
    }
    return count;
}

int main()
{
    srand(time(0));
    const int size_a, size_b;
    cin>>size_a>>size_b;
    int a[size_a];
    for(int i = 0; i < size_a; i++)
        a[i] = rand()%10;
    int b[size_b];
    for(int j = 0; j < size_b; j++)
        b[j] = rand()%10;
    cout << "There are " << countElements(int* a, int* b, int size_a, int size_b) << "the same elements in a and b." << endl;
    system("pause");
    return 0;
}
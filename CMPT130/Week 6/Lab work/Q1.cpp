#include <iostream>
using namespace std;

int successiveSum(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Please enter an integer number.";
    cin>>n;
    cout<<"The sum is:"<<successiveSum(n)<<endl;
    system("pause");
    return 0;
}
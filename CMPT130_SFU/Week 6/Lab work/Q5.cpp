#include  <iostream>
using namespace std;

void isEven(int a)
{
    if (a%2 == 0)
        cout << "The number is even."<<endl;
    else
    {
        cout << "The number is odd." <<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter an integer:";
    cin>>n;
    isEven(n);
    system("pause");
    return 0;
}
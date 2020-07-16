#include <iostream>
using namespace std;

bool isDigit(char ch)
{
    if(ch>=48&&ch<=57)
        return true;
    else
    {
        return false;
    }
}
int main()
{
    float n;
    cout<<"Enter something."<<endl;
    cin>>n;
    cout<<isDigit(n)<<endl;
    system("pause");
    return 0;
}
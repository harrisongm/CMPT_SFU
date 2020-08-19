#include <iostream>
using namespace std;

int successiveProduct(int n)
{
    int product = 1;
    for(int i = 1; i < n; i++)
    {
        product *= i;
    }
    return product;
}
int main()
{
    int n;
    cout<<"Please enter an integer.";
    cin>>n;
    cout << "The product is: "<<successiveProduct(n)<< endl;
    system("pause");
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Please enter how many bottles of water you wanna buy." << endl;
    cin >> n;

    int i = 1;
    double sum = n * 1.5;
    
    while(i < n)
    {
		if (i*0.05<=1.0) 
        {
        sum = sum + (1.5-i*0.05)
        } 
        else 
        {
        sum = sum + 0.5
        }
    }
	cout << "The total price will be:" <<sum<< endl;
    
    system("pause");
    return 0;
}
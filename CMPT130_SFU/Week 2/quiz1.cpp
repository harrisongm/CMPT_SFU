#include <iostream>

using namespace std;

int main()
{
  int a, b1, b2, b3, b4, b5, b6, b7, b8;

  cout << "please enter a number between 0 and 255:" <<endl;

  cin>>a;
  b8 = a%2;
  a = a/2;
  b7 = a%2;
  a = a/2;
  b6 = a%2;
  a = a/2;
  b5 = a%2;
  a = a/2;
  b4 = a%2;
  a = a/2;
  b3 = a%2;
  a = a/2;
  b2 = a%2;
  a = a/2;
  b1 = a%2;

  cout << "The number transfer to unsigned binary representation is:"<<b1<<b2<<b3<<b4<<b5<<b6<<b7<<b8<<endl;
  
  system("pause");
  return 0;
}
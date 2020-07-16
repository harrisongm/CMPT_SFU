#include <iostream>
using namespace std;

bool isPrimedrome(int num)
{
    int rev = 0, ori_num = num;
    while(num > 0)
    {
        int rem = num%10;
        rev = rev * 10 + num;
        num = num/10;
    }
    if (rev = ori_num)
        return true;
    else
    {
        return false;
    }
}
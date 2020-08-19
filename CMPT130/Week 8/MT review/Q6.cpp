/*
Write a function named isPalindrome that takes a non-negative integer arguement.
*/
#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int temp = num;
    int result = 0;
    while(num > 0)
    {
        /*
        int reminder = num % 10;
        */
        result = result*10 + num%10;
        num /= 10;
    }

    if(result == temp)
    {
        return true;
    }
    return false;
}
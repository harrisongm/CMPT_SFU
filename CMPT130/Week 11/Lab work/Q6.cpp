#include <iostream>
#include <string>
using namespace std;

bool doesContainDigit(char* S)
{
    bool check = false;
    int size = 0;
    while(S[size] != '\0')
        size++;
    for(int digit = 0; digit < 9; digit++)
    {
        for(int i = 0; i < size; i++)
        {
            if(S[i] == digit)
                check = true;
        }
    }
    return check;
}

int main()
{
    char S1[] = "test";
    char S2[] = "cmpt120";
    //test the function
    if(doesContainDigit(S1) == true)
        cout << "It has at least one digit." << endl;
    else
        cout << "There is no digit in it." << endl;
    if(doesContainDigit(S2) == true)
        cout << "It has at least one digit." << endl;
    else
        cout << "There is no digit in it." << endl;
    system("pause");
    return 0;
}
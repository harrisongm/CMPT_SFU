#include <iostream>
using namespace std;

int findCharacter(char* S, char ch)
{
    int size = 0;
    while(S[size] != '\0')
        size++;
    for(int i = 0; i < size, i++)
    {
        if(S[i] == ch)
            return i;
    }
    return -1;
}

int findLastCharacter(char* S, char ch)
{
    int size = 0;
    while(S[size] != '\0')
        size++;
    for(int i = size; i > 0; i--)
    {
        if(S[i] == ch)
            return i;
    }
    return -1;
}

int main()
{
    char* S = "massachussettes";
    //test findCharacter function
    char ch1 = 's', ch2 = 'c';
    cout << findCharacter(S, ch1) << endl;
    cout << findCharacter(S, ch2) << endl;
    //test findLastCharacter function
    cout << findLastCharacter(S, ch1) << endl;
    cout << findLastCharacter(S, ch2) << endl;
    system("pause");
    return 0;
}
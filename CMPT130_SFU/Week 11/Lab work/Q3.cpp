#include <iostream>
#include <ctime>
using namespace std;

int combine(char& C1, char& C2)
{
    int size = sizeof(C1) + sizeof(C2);
    char* C3 = new char[size];
    for(int i = 0; i < size; i++)
    {
        
    }
}

int main()
{
    //create a C-string
    const int len1 = rand()10 + 4;
    char* C1 = new char[len1 + 1];
    for(int i = 0; i < len1; i++)
    {
        C1[i] = rand()%26 + 97;
    }
    C1[len1] = '\0';

    //Create a second C-string
    const int len2 = rand()%10 + 6;
    char* C2 = new char[len2 + 1];
    for(int i = 0; i < len2; i++)
        C2[i] = rand() % 26 + 65;
    C2[len2] = '\0';

    //Print the two C-strings
    cout << "C1 = " << C1 << endl;
    cout << "C2 = " << C2 << endl;

    //Combine C1 and C2 to a new C-string C3
    char* C3 = combine(C1, C2);

    //Print the answer
    cout << C1 << " and " << C2 << " combined together give " << C3 << endl;

    //Delete the dynamic arrays
    delete[] C1; delete[] C2; delete[] C3;

    system("pause");
    return 0;
}
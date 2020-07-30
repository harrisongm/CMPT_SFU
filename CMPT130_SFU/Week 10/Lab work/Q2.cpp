#include <iostream>
using namespace std;

int** transpose(int** A, int row, int col)
{
    int r = col;
    int c = row;
    int** temp = new int* [r];
    for(int i = 0; i < r; i++)
        temp[i] = new int[c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            temp[i][j] = A[j][i];
        }
    }
    return temp;
}

int main()
{
    
}
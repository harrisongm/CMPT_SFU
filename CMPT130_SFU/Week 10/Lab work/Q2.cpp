#include <iostream>
#include <ctime>
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
    srand(time(0));
    const int row;
    const int col;
    cin>>row>>col;
    int** A = new int*[row];
    for(int i = 0; i < row; i++)
        A[i] = new float[col];
    for(int j = 0; j < row; j++)
    {
        for(int k = 0; k < col; k++)
            A[j][k] = rand()%10 + 1;
    }
    cout << "The original 2D array is:" << endl;
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
            cout <<A[r][c] << "\t";
        cout << endl;
    }
    transpose(A, row, col);
    cout << "--------transpose function completed--------" << endl;
    cout << "Though the transpotation function, the 2D array is become:" <<endl;
    for(int r = 0; r < row; r++)
    {
        for(int c = 0; c < col; c++)
            cout <<A[r][c] << "\t";
        cout << endl;
    }
    //delete the 2D array
    for(int i = 0; i < row; i++)
        delete [] A[i];
    delete [] A;
    system("pause");
    return 0;
}
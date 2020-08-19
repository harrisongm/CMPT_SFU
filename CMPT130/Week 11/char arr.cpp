#include <iostream>
using namespace std;

int main() {
    int *x1 = new int[10];
    char *x2 = new char[10];
    bool *x3 = new bool[10];
    float *x4 = new float[10];
    double *x5 = new double[10];

    for (int i = 0; i < 10; i++) {
        x1[i] = 1 + i;
        x2[i] = 97 + i;
        x3[i] = i % 2 == 0 ? true : false;
        x4[i] = 1.0 + i;
        x5[i] = 2.0 + i;
    }

    cout << x1 << endl;
    cout << x2 << endl;
    cout << x3 << endl;
    cout << x4 << endl;
    cout << x5 << endl;

    delete[] x1; delete[] x2; delete[] x3;
    delete[] x4; delete[] x5;

    system("pause");
    return 0;
}


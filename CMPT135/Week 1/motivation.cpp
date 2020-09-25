#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x, y;

    cout << "Enter the x coordinate of the Point: ";
    cin >> x;
    cout << "Enter the y coordinate of the Point: ";
    cin >> y;

    cout << "The Point object you created is P(" << x << ", " << y << ")" << endl;

    double distance = sqrt(x*x + y*y);
    cout << "THe distance of the Point from the origin is " << distance << endl;

    system("pause");
    return 0;
}
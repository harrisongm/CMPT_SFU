#include <iostream>
#include <cmath>
using namespace std;

struct Point{
    double x;
    double y;
};

int main(){
    Point p1;
    Point& p1Alias = p1;

    cout << "Enter the x coordinate of the Point: ";
    cin >> p1.x;
    cout << "Enter the y coordinate of the Point: ";
    cin >> p1.y;
    cout << "The Point object you created is P(" << p1Alias.x << ", " << p1Alias.y << ")" << endl;
    double distance = sqrt(p1Alias.x*p1.x + p1.y*p1Alias.y);
    cout << "The distance of the Point from the origin is " << distance << endl;

    system("pause");
    return 0;
}
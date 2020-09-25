#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
};

int main(){
    Point p1, p2;
    p1.x = 1;
    p2.y = 2;

    p2 = p1;

    cout << "Point p1 is (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Point p2 is (" << p2.x << ", " << p2.y << ")" << endl;

    p2.x = 3;
    p2.y = 4;

    cout << "After modification, Point p2 is now (" << p2.x << ", " << p2.y << ")" << endl;
    cout << "Point p1 is still (" << p1.x << ", " << p1.y << ")" << endl;

    system("pause");
    return 0;
}
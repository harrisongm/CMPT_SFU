#include <iostream>
using namespace std;

struct Point{
    double x;
    double y;
};
void printPoint(Point p){
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}
void foo(Point& a, Point* b, Point c){
    a.x = c.y;
    a.y = b->x;
    c.x = b->y;
    c.y = a.x;
    (*b).x = c.y;
    b->y = a.x;
}
int main(){
    Point p1, p2, p3;
    p1.x = 1;
    p1.y = 2;
    p2.x = 3;
    p2.y = 4;
    p3.x = 5;
    p3.y = 6;

    foo(p1, &p2, p3);

    cout << "Point p1 is ";
    printPoint(p1);
    cout << "Point p2 is ";
    printPoint(p2);
    cout << "Point p3 is ";
    printPoint(p3);

    system("pause");
    return 0;
}

    // p1.x=6, p1.y=3, p3.x=4, p3.y=6, p2.x=6, p2.y=6;
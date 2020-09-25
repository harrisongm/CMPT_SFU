#include <iostream>
#include <ctime>
using namespace std;

struct Point{
    double x;
    double y;
};

int main(){
    Point* p1;
    p1 = new Point;
    p1->x = 1.2;
    p1->y = -2.2;
    cout << "Point p1 is (" << p1->x << ", " << p1->y << ")" << endl;
    Point* p2 = new Point;
    cout << "Enter x-coordinate of p2 ";
    cin >> p2->x;
    cout << "Assigning random double value in (1.5, 3.2) to the y-coordinante of p2";
    srand(time(0));
    p2->y = (1.0*rand() / RAND_MAX) * (3.2 - 1.5) + 1.5;
    cout << "Point p2 is (" << p2->x << ", " << p2->y << ")" << endl;

    delete p1;
    delete p2;

    system("Pause");
    return 0;
}
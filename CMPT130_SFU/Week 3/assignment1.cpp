#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float a, b, c, q;

	cout << "Enter the coefficient a:" << endl;
	cin >> a;
	cout << "Enter the coefficient b:" << endl;
	cin >> b;
	cout << "Enter the coefficient c:" << endl;
	cin >> c;

	q = pow(b, 2) - 4*a*c;

	if (q < 0)
	{
		cout << "This bi-quadratic equation has no solutions.";
	}
	else if (q > 0)
	{
	    double w1 = (-b + sqrt(q)) / (2*a);
	    double w2 = (-b - sqrt(q)) / (2*a);

	    if (w1 < 0 && w2 < 0)
	    cout << "This bi-quadratic equation has no solutions." << endl;
		else if (w1 > 0 && w2 < 0)
        {
            double x1 = sqrt(w1);
            double x2 = -sqrt(w1);
            cout << "This bi-quadratic equation has the following solutions:" << x1 <<","<< x2 << endl;
        }
		else if (w1 < 0 && w2 > 0)
        {
            double x1 = sqrt(w2);
            double x2 = -sqrt(w2);
            cout << "This bi-quadratic equation has the following solutions:" << x1 <<","<< x2 << endl;
        }
		else
        {
            double x1 = sqrt(w1);
            double x2 = -sqrt(w1);
            double x3 = sqrt(w2);
            double x4 = -sqrt(w2);
            cout << "This bi-quadratic equation has the following solutions:" << x1 <<","<< x2 <<","<< x3 <<","<< x4 << endl;
        }
	}
	else
    {
	    double w1 = -b / (2*a);
	    double x1 = sqrt(w1);
	    double x2 = -sqrt(w1);
	    cout << "This bi-quadratic equation has the following solutions:" << x1 <<","<< x2 << endl;
    }

	system("pause");
	return 0;
}
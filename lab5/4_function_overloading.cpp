#include <iostream>
#include <math.h>
using namespace std;

class Area
{
public:
    void calculateArea(float length)
    {
        cout << "The area of square is " << length * length << endl;
    }
    void calculateArea(float length, float breadth)
    {
        cout << "The area of rectangle is " << length * breadth << endl;
    }

    void calculateArea(double a, double b, double c)
    {
        double s, area;
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "The area of triangle is " << area << endl;
    }
};
int main()
{
    Area a;
    a.calculateArea(1.1, 2.2, 2.2);
    a.calculateArea(5.5, 6.6);
    a.calculateArea(9.9);
    return 0;
}

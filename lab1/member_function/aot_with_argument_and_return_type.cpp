// WAP to compute area of triangle using user defined function with arguments and return type using member function

#include<iostream>
#include<math.h>
using namespace std;

class area
{
    private:
    double a;
    double b;
    double c;

    public:
    double calculateArea(double x,double y,double z)
{
    double s;
    a=x;
    b=y;
    c=z;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
};
int main()
{
    double x,y,z;
    cout<<"Enter the length of first side of triangle:";
    cin>>x;
    cout<<"Enter the length of second side of triangle:";
    cin>>y;
    cout<<"Enter the length of third side of triangle:";
    cin>>z;
    area a;
    cout<<"The area of triangle is "<<a.calculateArea(x,y,z);
}
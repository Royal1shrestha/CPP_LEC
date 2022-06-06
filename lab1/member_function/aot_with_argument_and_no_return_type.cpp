// WAP to compute area of triangle using user defined function with arguments and no return type using member function.

#include<iostream>
#include<math.h>
using namespace std;

struct area
{
    double s;

    double calculateArea(double a,double b,double c)
{
    s=(a+b+c)/2;
    cout<<"The area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c));
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
    a.calculateArea(x,y,z);
}

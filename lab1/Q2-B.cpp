// WAP to compute area of triangle using user defined function with arguments and no return type

#include<iostream>
#include<math.h>
using namespace std;

void calculateArea(double a,double b,double c)
{
    double s;
    s=(a+b+c)/2;
    cout<<"The area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    double a,b,c;
    cout<<"Enter the length of first side of triangle:";
    cin>>a;
    cout<<"Enter the length of second side of triangle:";
    cin>>b;
    cout<<"Enter the length of third side of triangle:";
    cin>>c;
    calculateArea(a,b,c);
}
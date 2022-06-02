// WAP to compute area of triangle using user defined function with no arguments and no return type using member function

#include<iostream>
#include<math.h>
using namespace std;

struct area
{
    double a,b,c,s;
    double calculateArea()
{
    cout<<"Enter the length of first side of triangle:";
    cin>>a;
    cout<<"Enter the length of second side of triangle:";
    cin>>b;
    cout<<"Enter the length of third side of triangle:";
    cin>>c;
    s=(a+b+c)/2;
    cout<<"The area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c));
}
};
int main()
{
    area a;
    a.calculateArea();
}
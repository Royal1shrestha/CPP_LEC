// WAP to compute area of triangle using user defined function with no arguments and no return type

#include<iostream>
#include<math.h>
using namespace std;

void calculateArea()
{
    double a,b,c,s;
    cout<<"Enter the length of first side of triangle:";
    cin>>a;
    cout<<"Enter the length of second side of triangle:";
    cin>>b;
    cout<<"Enter the length of third side of triangle:";
    cin>>c;
    s=(a+b+c)/2;
    cout<<"The area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    calculateArea();
    return 0;
}
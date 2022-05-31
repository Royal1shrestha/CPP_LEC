// WAP to compute area of triangle using user defined function with no arguments and  return type

#include<iostream>
#include<math.h>
using namespace std;

double calculateArea()
{
    double a,b,c,s;
    cout<<"Enter the length of first side of triangle:";
    cin>>a;
    cout<<"Enter the length of second side of triangle:";
    cin>>b;
    cout<<"Enter the length of third side of triangle:";
    cin>>c;
    s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
    cout<<"The area of triangle is "<<calculateArea();
    return 0;
}
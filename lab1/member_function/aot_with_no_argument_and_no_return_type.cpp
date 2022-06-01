// WAP to compute area of triangle using user defined function with no arguments and no return type using member function

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
    double calculateArea()
{
    double x,y,z,s;
    cout<<"Enter the length of first side of triangle:";
    cin>>x;
    cout<<"Enter the length of second side of triangle:";
    cin>>y;
    cout<<"Enter the length of third side of triangle:";
    cin>>z;
    a=x;
    b=y;
    c=z;
    s=(a+b+c)/2;
    cout<<"The area of triangle is "<<sqrt(s*(s-a)*(s-b)*(s-c));
}
};
int main()
{
    area a;
    a.calculateArea();
}
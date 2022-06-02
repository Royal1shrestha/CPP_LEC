// WAP to compute area of triangle using member function.

#include<iostream>
using namespace std;

struct area
{
    double length;
    double height;

    void calculateArea()
    {
    cout<<"Enter the length of triangle:";
    cin>>length;
    cout<<"Enter the height of triangle:";
    cin>>height;
    cout<<"The area of triangle is "<<(0.5*length*height);
    }
}a;

int main()
{
    a.calculateArea();
}
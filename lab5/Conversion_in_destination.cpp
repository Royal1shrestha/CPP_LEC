#include<iostream>
#include<cmath>
using namespace std;

class rect
{
    public:
    float x=0,y=0;

    rect()
    {
        cout<<"Enter value of x : ";
        cin>>x;
        cout<<"Enter value of y : ";
        cin>>y;
    }
};

class polar
{
    public:
    float radius,angle;

    polar()
    {
        radius=0;
        angle=0;
    }

    polar(rect r)
    {
        radius=sqrt(r.x*r.x+r.y*r.y);
        angle=atan(r.y/r.x);
    }

    void display()
    {
        cout<<"Radius : "<<radius<<endl;
        cout<<"Angle : "<<angle*180/3.14<<endl;
    }
};

int main()
{
    polar p;
    rect r;
    p=r;
    p.display();
}
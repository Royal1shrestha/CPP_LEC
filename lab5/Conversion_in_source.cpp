#include<iostream>
#include<math.h>
using namespace std;

class rect
{
    public:
    float x,y;

    rect()
    {
        x=0;
        y=0;
    }

    void getData()
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
    float radius;
    float angle;

    void getData()
    {
        cout<<"Enter value of radius : ";
        cin>>radius;
        cout<<"Enter value of angle in degree : ";
        cin>>angle;
    }
    void conversion(rect r)
    {
        r.getData();
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
    p.conversion(r);
    p.display();
}
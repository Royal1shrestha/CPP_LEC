#include<iostream>
#include<math.h>
using namespace std;

class polar
{
    public:
    float radius;
    float angle;

    polar(){}
    polar(float a,float b)
    {
        radius=a;
        angle=b;
    }
    void display()
    {
        cout<<"Radius : "<<radius<<endl;
        cout<<"Angle : "<<angle*180/3.14<<endl;
    }
};

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

    operator polar()
    {
        float radius,angle;
        radius=sqrt(x*x+y*y);
        angle=atan(y/x);
        return polar(radius,angle);
    }
};

int main()
{
    polar p;
    rect r;
    r.getData();
    p=r;
    p.display();
}
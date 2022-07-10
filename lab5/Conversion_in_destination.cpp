#include<iostream>
#include<math.h>
using namespace std;

class rect;
class polar
{
    public:
    int radius,angle;

    void getData()
    {
        cout<<"Enter value of radius : ";
        cin>>radius;
        cout<<"Enter value of angle in degree : ";
        cin>>angle;
    }

    void display()
    {
        cout<<"Radius : "<<radius<<endl;
        cout<<"Angle : "<<angle<<endl;
    }
};

class rect
{
    public:
    int x,y;

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

    void conversion(polar p)
    {
        p.getData();
        x=p.radius*cos(p.angle*3.14/180);
        y=p.radius*sin(p.angle*3.14/180);
    }

    void display()
    {
        cout<<"x : "<<x<<endl; 
        cout<<"y : "<<y; 
    }
};

int main()
{
    polar p;
    rect r;
    r.conversion(p);
    r.display();
}
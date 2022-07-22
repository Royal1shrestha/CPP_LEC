#include<iostream>
#include<cmath>
using namespace std;

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

    rect(polar p)
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
    r=p;
    r.display();
}
#include<iostream>
using namespace std;

class Shape
{
    protected:
    int width,length;

    public:
    Shape(int a=0,int b=0)
    {
        width=a;
        length=b;
    }

    void virtual Area()
    {
        cout<<"The area of shape ..... "<<endl;
    }
};

class Triangle : public Shape
{
    public:
    Triangle(int a,int b)
    {
        width=a;
        length=b;
    }

    void Area()
    {
        cout<<"Area of triangle is "<<(0.5*width*length)<<endl;
    }
};

class Rectangle : public Shape
{
    public:
    Rectangle(int a,int b)
    {
        width=a;
        length=b;
    }

    void Area()
    {
        cout<<"Area of rectangle is "<<(width*length)<<endl;
    }
};

int main()
{
    Shape *s;
    Shape sh(1,2);
    Triangle t(5,10);
    Rectangle r(10,20);

    s=&sh;
    s ->Area();

    s=&t;
    s -> Area();

    s=&r;
    s ->Area();

    return 0;
}
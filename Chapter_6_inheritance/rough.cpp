#include<iostream>
using namespace std;

class A
{
    public:
    int x;
    int y;

    void getdata(int a,int b)
    {
        x=a;
        y=b;
    }

    A operator +(A &a1)
    {
        A a;
        a.x=a1.x+x;
        a.y=a1.y+y;
        return a;
    }
};

int main()
{
    A a1,a2,a3;
    a1.getdata(2,3);
    a2.getdata(5,6);
    a3=a1+a2;
    cout<<"Value of sum of x : "<<a3.x<<endl;
    cout<<"Value of sum of y : "<<a3.y<<endl;
}
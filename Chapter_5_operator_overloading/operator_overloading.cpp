#include<iostream>
using namespace std;

class cmplx
{
    private:
    float real;
    float img;

    public:
    void getdata()
    {
        real=0;
        img=0;
    }

    void getdata(float r,float i)
    {
        real = r;
        img = i;
    }

    cmplx operator +(cmplx &c)
    {
        cmplx c1;
        cout<<real<<endl;
        cout<<img<<endl;
        c1.real=real+c.real;
        c1.img=img+c.img;
        return c1;
    }

    void display()
    {
        cout<<"The sum of complex no : "<<real<<"+i"<<img;
    }
};

int main()
{
    cmplx c1,c2,c3;
    c1.getdata(4.5,5.5);
    c2.getdata(6.5,7.5);
    c3=c1+c2;
    c3.display();
}
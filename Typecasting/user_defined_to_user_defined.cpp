#include<iostream>
using namespace std;

class Convert2
{
    public:
    float temp;

    Convert2()
    {
        temp=0;
    }

    Convert2(float a)
    {
        temp=a;
    }
};

class Convert1
{
    float temper;

    public:
    Convert1()
    {
        temper=0;
    }

    Convert1(Convert2 c)
    {
        temper=(c.temp-32)*5/9;
    }

    void showtemp()
    {
        cout<<"The converted temperature is "<<temper<<endl;
    }
};

int main()
{
    Convert1 m;
    Convert2 n(-40);
    m=n;
    m.showtemp();
}
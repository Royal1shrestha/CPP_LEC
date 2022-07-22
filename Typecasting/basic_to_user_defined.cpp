#include<iostream>
using namespace std;

class Celsius
{
    float temper;

    public:
    Celsius()
    {
        temper=0;
    }

    Celsius(float ctmp)
    {
        temper=(ctmp-32)*5/9;
    }

    void showtemp()
    {
        cout<<"The converted temperature is "<<temper<<endl;
    }
};

int main()
{
    Celsius c1; //user defined
    float c; //basic
    cout<<"Enter the temperature in celsius : ";
    cin>>c;
    c1=c; //basic to user defined
    c1.showtemp();
}
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

    operator float()
    {
        float ftemp;
        ftemp=(temper-32)*5/9;
        return ftemp;
    }

    void getData()
    {
        cout<<"Enter the temperature in celsius : ";
        cin>>temper;
    }
};

int main()
{
    Celsius c1; //userdefined
    float f; //basic
    c1.getData();
    f=c1; //userdefined to basic
    cout<<"The converted temperature is "<<f<<endl;
}
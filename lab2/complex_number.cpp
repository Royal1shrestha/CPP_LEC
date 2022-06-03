//WAP to add two complex numbers passing object as an argument and returning resultant complex number.
#include<iostream>
using namespace std;

class cmplx
{
    public:
    float real;
    float img;

    void getNumber()
    {
        cout<<"Enter the real part of complex no :";
        cin>>real;
        cout<<"Enter the complex part of complex no :";
        cin>>img;
    }
};

float realNO(cmplx c1,cmplx c2)
{
    float r;
    r=c1.real+c2.real;
    return r;
}

float imgNO(cmplx c1,cmplx c2)
{
    float i;
    i=c1.img+c2.img;
    return i;
}

int main()
{
    cmplx c1,c2;
    c1.getNumber();
    c2.getNumber();
    cout<<"The resultant complex number is "<<realNO(c1,c2)<<"+i"<<imgNO(c1,c2)<<endl;
}
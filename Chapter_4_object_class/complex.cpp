#include<iostream>
using namespace std;

class cmplx
{
    private:
    float real;
    float img;

    public:
    void getNumber()
    {
        cout<<"Enter the real part of complex number : ";
        cin>>real;
        cout<<"Enter the imaginary part of complex number : ";
        cin>>img;
    }

    cmplx add(cmplx c1, cmplx c2)
    {
        cmplx sum;
        sum.real=c1.real+c2.real;
        sum.img=c1.img+c2.img;
        return sum;
    }

    void display(cmplx s)
    {
        cout<<"The sum is "<<s.real<<"+i"<<s.img;
    }
};

int main()
{
    cmplx c1,c2,c;
    c1.getNumber();
    c2.getNumber();
    c.add(c1,c2);
    c.display(c.add(c1,c2));
    return 0;
}
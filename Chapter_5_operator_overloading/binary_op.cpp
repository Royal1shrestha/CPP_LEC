#include<iostream>
using namespace std;

class binary
{
    private:
    int a;
    int b;

    public:
    binary()
    {
        a=0;
        b=0;
    }

    binary(int x,int y)
    {
        a=x;
        b=y;
    }

    binary operator +(binary &bin)
    {
        binary b1;
        cout<<"Value of bin inside overloading function is "<<bin.a<<endl;
        cout<<"Value of bin inside overloading function is "<<bin.b<<endl;
        cout<<"Value of b1 inside overloading function is "<<b1.a<<endl;
        cout<<"Value of b1 inside overloading function is "<<b1.b<<endl;
        // calling object is passed implicitedly and second object is passed through argument
        b1.a = a+bin.a;
        b1.b = b+bin.b;
        return b1;
    }

    void display();
};

    void binary :: display()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }

int main()
{
    binary B1,B2,B3;
    B1=binary(5,10);
    B2=binary(7,13);
    B3=B1+B2;
    B1.display();
    B2.display();
    B3.display();
}
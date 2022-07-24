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

    binary friend operator +(binary &bin1,binary &bin2);
    void display();
};

    binary operator +(binary &b1,binary &b2)
    {
        binary b3;
        // calling object is passed implicitedly and second object is passed through argument
        b3.a = b1.a+b2.a;
        b3.b = b1.b+b2.b;
        return b3;
    }

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
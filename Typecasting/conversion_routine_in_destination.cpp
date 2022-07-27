#include<iostream>
using namespace std;

class Y
{
    public:
    int nc;

    Y()
    {
        cout<<"Enter the amount in NRS : ";
        cin>>nc;
    }
};

class X
{
    public:
    int ic;

    X()
    {
        ic=0;
    }

    X(Y p)
    {
        ic=p.nc/1.6;

    }

    void display()
    {
        cout<<"The converted amount in INR is "<<ic;
    }
};


int main()
{
    X a;
    Y b;
    a=b;
    a.display();
}
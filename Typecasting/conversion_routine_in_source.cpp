#include<iostream>
using namespace std;

class X
{
    public:
    int ic;

    X()
    {
        ic=0;
    }

    X(int a)
    {
        ic=a;
    }

    void display()
    {
        cout<<"The converted amount in INR is "<<ic;
    }
};

class Y
{
    public:
    int nc;

    Y()
    {
        cout<<"Enter the amount in NRS : ";
        cin>>nc;
    }

    operator X()
    {
        int i;
        i=nc/1.60;
        return X(i);
    }
};

int main()
{
    X a;
    Y b;
    a=b;
    a.display();
}
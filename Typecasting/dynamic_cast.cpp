#include<iostream>
using namespace std;

class Base
{
    public:
    virtual void print()
    {
        cout<<"Base"<<endl;
    }
};

class Derived : public Base
{
    public:
    void print()
    {
        cout<<"Derived 1"<<endl;
    }
};

int main()
{
    Base *bptr,bpt;
    Derived *dptr,dpt;

    bptr=&dpt;
    // bptr->print();
    dptr=dynamic_cast<Derived*>(bptr);
    dptr->print();

    if(dptr==nullptr)
    {
        cout<<"Null pointer"<<endl;
    }
    else
    {
        cout<<"Not null"<<endl;
    }
    return 0;
}
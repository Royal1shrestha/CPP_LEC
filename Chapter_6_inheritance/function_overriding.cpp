#include<iostream>
using namespace std;

class base
{
    protected:
    void print()
    {
        cout<<"Base function"<<endl;
    }
};

class derived : public base
{
    public:
    void print()
    {
        cout<<"Derived function"<<endl;
    }
};

int main()
{
    derived d;
    d.print();
    return 0;
}
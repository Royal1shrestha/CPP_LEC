#include<iostream>
using namespace std;

class base
{
    public:
    void print()
    {
        cout<<"Base function"<<endl;
    }
};

class derived
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
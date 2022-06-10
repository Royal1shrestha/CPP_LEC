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

class derived : public base
{
    public:
    void print()
    {
        cout<<"Derived function"<<endl;
        // method 1
        base::print();
    }
};

int main()
{
    derived d,d1;
    d.print();
    // method 2
    d1.base::print();
    return 0;
}
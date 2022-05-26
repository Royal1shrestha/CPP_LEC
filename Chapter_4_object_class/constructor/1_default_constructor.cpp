// WAP to demonstrate default constructor
#include<iostream>
using namespace std;

class construct
{
    public:
    int a;
    int b;

    construct()
    {
        cout<<"Constructor is called "<<endl;
        a=10;
        b=20;
    }
    void display()
    {
        cout<<"My name is Royal."<<endl;
    }
};

int main()
{
    construct c;
    c.display();
    cout<<c.a<<endl;
    cout<<c.b;
}
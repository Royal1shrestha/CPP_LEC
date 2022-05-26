// WAP to demonstrate default constructor
#include<iostream>
using namespace std;

class construct
{
    public:
    int a;
    int b;

    public:
    construct()
    {
        cout<<"Constructor is called ";
        a=10;
        b=20;
    }
    void display()
    {
        cout<<"My name is Royal.";
    }
};

int main()
{
    construct c;
    c.display();
}
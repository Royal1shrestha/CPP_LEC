// multilevel inheritance
#include<iostream>
using namespace std;

class A
{
    protected:
    int a;
    
    public:
    void displayA()
    {
    a=10;
    }
};

class B : public virtual A
{
    public:
    void displayB()
    {
        cout<<a;
    }
};

class C : public virtual A
{
    public:
    void displayC()
    {
        cout<<a;
    }
};

class D : public B,public C
{
    public:
    void displayD()
    {
        cout<<a;
    }
};
int main()
{
    B o1;
    C o2;
    D obj1;
    obj1.displayD();
    obj1.displayC();
    obj1.displayB();
    obj1.displayA();
    o1.displayA();
    o1.displayB();
    o2.displayA();
    o2.displayC();
    return 0;
}
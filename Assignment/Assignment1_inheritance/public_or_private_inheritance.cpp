// public or public inheritance
#include<iostream>
using namespace std;

class A
{
    private:
    int pvtdataA;

    protected:
    int protdataA;

    public:
    int pubdataA;
};

class B : public A //publicly derived
{
    public:
    void func()
    {
        int a;
        // a=pvtdataA; //error:not accessible
        a=protdataA; //ok
        a=pubdataA; //ok
    }
};

class C : protected A //protectedly derived
{
    public:
    void func()
    {
        int a;
        // a=pvtdataA; //error:not accessible
        a=protdataA; //ok
        a=pubdataA; //ok
    }
};

class D : private A //privately derived
{
    public:
    void func()
    {
        int a;
        // a=pvtdataA; //error:not accessible
        a=protdataA; //ok
        a=pubdataA; //ok
    }
};

int main()
{
    int num;
    B objB;
    // num=objB.pvtdataA; //Error:not accessible
    // num=objB.protdataA; //Error:not accessible
    num=objB.pubdataA; //ok:pubdataA is public to B

    C objC;
    // num=objC.pvtdataA; //Error:not accessible
    // num=objC.protdataA; //Error:not accessible
    // num=objC.pubdataA; //Error:not accessible
                        //pubdataA is protected to C

    D objD;
    // num=objD.pvtdataA; //Error:not accessible
    // num=objD.protdataA; //Error:not accessible
    // num=objD.pubdataA; //Error:not accessible
                        //pubdataA is private to D
    
    return 0;
}

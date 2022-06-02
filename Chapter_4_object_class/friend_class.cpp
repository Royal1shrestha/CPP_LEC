// WAP to show use of friend class
#include<iostream>
using namespace std;

class classname1
{
    friend class classname2;

    private:
    int x;

    public:
    classname1(int a)
    {
    x=a;
    }
};

class classname2
{
    public:
    classname2(classname1 obj)
    {
    cout<<"The value of number is "<<obj.x<<endl;
    }
};

int main()
{
    classname1 obj1(10);
    classname2 obj2(obj1);
}
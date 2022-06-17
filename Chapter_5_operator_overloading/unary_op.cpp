#include<iostream>
using namespace std;

class unary
{
    private:
    int a,b,c;

    public:
    void getData(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }

    void operator -()
    {
        a=-a;
        b=-b;
        c=-c;
    }

    void display()
    {
        cout<<"Vale of a : "<<a<<endl;
        cout<<"Vale of b : "<<b<<endl;
        cout<<"Vale of c : "<<c<<endl;
    }
};

int main()
{
    unary o1,o2;
    o1.getData(1,2,3);
    o2.getData(4,5,6);
    o1.display();
    o2.display();
    // calling overloaded operator
    - o1;
    - o2;
    o1.display();
    o2.display();
}
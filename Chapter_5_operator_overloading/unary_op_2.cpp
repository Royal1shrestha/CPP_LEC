#include<iostream>
using namespace std;

class Data
{
    private:
    int a=10,b=20,c=30;

    public:
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
    }
    void friend operator -(Data &d);
};

void operator -(Data &d1)
{
    d1.a=-d1.a;
    d1.b=-d1.b;
    d1.c=-d1.c;
}

int main()
{
    Data d1,d2;
    // before overloading
    d1.show();
    -d1;
    // after overloading
    d1.show();
    // d2=-d1;
}
// After overloading an operator it can be applied to an object in the same way as it is applied to the basic types.
#include<iostream>
using namespace std;

class count
{
    private:
    int a;

    public:
    count()
    {
        a=10;
    }

    void display()
    {
        cout<<"Value : "<<a<<endl;
    }

    friend count operator ++(count &c,int);
    friend count operator ++(count &c);
};

count operator ++(count &c)
{
     c.a++;
     return c;
}

count operator ++(count &c,int)
{
     c.a++;
     return c;
}

int main()
{
    count c;
    c.display();
    ++c; 
    c.display();
    c++;
    c.display();
    return 0;
}
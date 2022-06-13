//constructor in derived class only
#include<iostream>
using namespace std;

class base
{
    //body of base class
};

class derived: public base
{
    public:
        derived()
        {
            cout<<"derived constructor from derived class";
        }
};

int main()
{
    derived d;
}
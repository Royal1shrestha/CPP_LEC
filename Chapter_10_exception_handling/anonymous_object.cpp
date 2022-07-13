#include<iostream>
using namespace std;

class Nameless
{
    public:
    Nameless()
    {
        cout<<"Constructor is called."<<endl;
    }

    ~Nameless()
    {
        cout<<"Destructor is called."<<endl;
    }
};

int main()
{
    Nameless();
}
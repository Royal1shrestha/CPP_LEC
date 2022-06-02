// friend function can access private data of class
// we declare friend function using friend keyword inside body of class
// syntax- friend return_type function_name(arguments) 

#include<iostream>
using namespace std;

class Distance
{
    friend int add(Distance);
    private:
    int meter;

    public:
    Distance()
    {
        meter=0;
    }
};

int add(Distance d)
{
    // accessing private member from friend function
    d.meter+=5;
    return d.meter;
}

int main()
{
    Distance dis;
    cout<<"Distance:"<<add(dis);
    return 0;
}
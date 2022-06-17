#include<iostream>
using namespace std;

class Rough
{
    public:
    int a=10;
};

int main()
{
    Rough r;
    cout<<"Primitive type increment :"<<r.a++<<endl;
    // cout<<"User defined type increment :"<<r++;
}
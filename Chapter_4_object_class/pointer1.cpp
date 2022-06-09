// use of this-> operator.
#include<iostream>
using namespace std;

class mobile
{
    private:
    int m=10;

    public:
    void display(int m)
    {
        cout<<"m="<<m<<endl;
        cout<<"this->m="<<this->m<<endl;
        cout<<"The address of the current object is "<<this<<endl;
    }
};

int main()
{
    mobile m1,m2;
    m1.display(30);
    m2.display(20);
    return 0;
}
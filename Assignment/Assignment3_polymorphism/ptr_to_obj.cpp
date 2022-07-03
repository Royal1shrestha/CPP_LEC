#include<iostream>
using namespace std;

class test
{
    public:
    int data;

    test()
    {
        cout<<"Constructor is called."<<endl;
        data = 55;
    }

    ~test()
    {
        cout<<"Destructor is called."<<endl;
    }

    void show()
    {
        cout<< data<<endl;
    }
};

int main()
{
    test *ptr;
    test obj;
    ptr=&obj;
    cout<<"Accessing object through obj.show";
    obj.show();
    cout<<endl<<"Accessing object through ptr ->show";
    ptr ->show();
    return 0;
}
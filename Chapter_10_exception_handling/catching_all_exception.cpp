#include<iostream>
using namespace std;

class Array
{
    private:
    int a[10];

    public:
    class LowRange{};
    class HighRange{};

    int operator [](int &index)
    {
        if(index<0)
        throw LowRange();
        if(index>10)
        throw HighRange();
        return index;
    }
};

int main()
{
    int index;
    Array a;
    try
    {
        cout<<"Enter array index : ";
        cin>>index;
        a[index];
        cout<<"Index is in range.";
    }

    catch(...)
    {
        cout<<"Exception out of range.";
    }
}
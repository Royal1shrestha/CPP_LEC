#include<iostream>
using namespace std;

class Alpha
{
    char x;
    int y;

    public:
    Alpha()
    {
        x=0;
        y=0;
    }

    Alpha(int a,double b)
    {
        x=a;
        y=b;
    }

    void showData()
    {
        cout<<"Converted data are "<<endl;
        cout<<x<<'\t'<<y;
    }
};

int main()
{
    Alpha a(97,4.24);
    a.showData();
}
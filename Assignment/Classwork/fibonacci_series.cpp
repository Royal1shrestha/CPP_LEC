#include<iostream>
using namespace std;

class work
{
    int a,b,temp;

    public:
    work()
    {
        a=0;
        b=1;
    }

    void operator ++()
    {
        temp=a+b;
        a=b;
        b=temp;
        cout<<b<<"\t";
    }

    void display()
    {
        cout<<a<<"\t"<<b<<"\t";
    }
};

int main()
{
    int n;
    work w;
    cout<<"Enter the number of terms to be shown :";
    cin>>n;
    w.display();
    for(int i=2;i<n;i++)
    {
        ++w;
    }
}
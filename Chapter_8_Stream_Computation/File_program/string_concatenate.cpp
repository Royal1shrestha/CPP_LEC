#include<iostream>
#include<cstring>
using namespace std;

class overload
{
    char a[100],b[100];
    string c;

    public:
    overload()
    {
        cout<<"Enter a string : ";
        cin>>a;
        cout<<"Enter a string : ";
        cin>>b;
    }

    void operator +()
    {
        c=strcat(a,b);
    }

    void display()
    {
        cout<<"The concatenated string is "<<c;
    }
};

int main()
{
    overload o1;
    +o1;
    o1.display();
}
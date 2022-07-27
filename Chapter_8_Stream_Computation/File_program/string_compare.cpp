#include<iostream>
#include<cstring>
using namespace std;

class compareString
{
    char a[100];

    public:
    compareString()
    {
        cout<<"Enter string :";
        cin>>a;
    }

    void operator ==(compareString c2)
    {
    if(strlen(a) == strlen(c2.a))
    {
        cout<<"Both strings are of equal length."<<endl;
    }

    else
    {
        cout<<"Strings are of different length."<<endl;
    }

    if(strcmp(a,c2.a)==0)
    {
        cout<<"Strings are equal."<<endl;
    }

    else
    {
        cout<<"Strings are unequal."<<endl;
    }
    }
};

int main()
{
    compareString c1,c2;
    c1==c2;
}
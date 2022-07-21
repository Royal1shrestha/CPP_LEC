#include<iostream>
using namespace std;

int main()
{
    int i;
    double d;
    float f=3.124f;
    char c='a';
    i=f;
    cout<<"Value of f is "<<f<<endl;
    cout<<"Value of converted integer is "<<i<<endl;

    i=static_cast<int>(f);
    cout<<"Value of integer is "<<i<<endl;

    i=c;
    cout<<"Value of c is "<<c<<endl;
    cout<<"Value of converted integer is "<<i<<endl;

    i=static_cast<int>(c);
    cout<<"Value of integer is "<<i<<endl;

    d=c;
    cout<<"Value of c is "<<c<<endl;
    cout<<"Value of converted double is "<<d<<endl;

    d=static_cast<double>(c);
    cout<<"Value of double is "<<d<<endl;
}
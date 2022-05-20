#include<iostream>
using namespace std;

void normal(int a)
{
    a=10;
    cout<<a<<endl;
}
void reference(int &b)
{
    b=50;
    cout<<b<<endl;
}
int main()
{
    int a=1,b=20;
    cout<<a<<endl;
    cout<<b<<endl;
    normal(a);
    reference(b);
    cout<<a<<endl;
    cout<<b<<endl;
}
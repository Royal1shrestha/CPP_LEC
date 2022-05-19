#include<iostream>
using namespace std;

int sum(int a, int b, int c)
{
    return (a+b+c);
}

int sum(int x=1, int y=2)
{
    return(x+y);
}

int main()
{
     cout<<sum(1,2,3)<<endl;
     cout<<sum(9,6)<<endl;
     cout<<sum();
}
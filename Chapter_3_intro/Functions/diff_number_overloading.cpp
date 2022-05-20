#include<iostream>
using namespace std;
int sum(int a, double b)
{
    return(a+b);
}
int sum(int x, double y, int z)
{
    return(x+y+z);
}
int main()
    {
        cout<<sum(1,5.5)<<endl;
        cout<<sum(1,3.5,5)<<endl;
        cout<<sum(1,6);
    }

#include<iostream>
using namespace std;

template<class T>
T max(T b)
{
    return b+1;
}

int main()
{
    cout<<"The required number is "<<max(5)<<endl;
    cout<<"The required number is "<<max(5.4)<<endl;
    cout<<"The required number is "<<max('a')<<endl;
}
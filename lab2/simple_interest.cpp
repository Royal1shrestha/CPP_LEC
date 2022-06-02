// WAP in c++ to calculate simple interest from given principle time and rate. Set the rate to 15% as default argument when rate is not provided.
#include<iostream>
#include<cmath>
using namespace std;

class simpleInterest
{
    private:
    float principle;
    int time;
    float rate;

    public:
    float interest(float pp,int tme,float r=0.15)
    {
        principle=pp;
        time=tme;
        rate=r;
        cout<<"The simple interest is "<<(principle*time*rate)<<endl;
    }
};

int main()
{
    float x,z;
    int y;
    simpleInterest s1;
    cout<<"Enter the value of principle : ";
    cin>>x;
    cout<<"Enter the value of time : ";
    cin>>y;
    cout<<"Enter the value of rate : ";
    cin>>z;
    s1.interest(x,y);
    s1.interest(x,y,z);
}
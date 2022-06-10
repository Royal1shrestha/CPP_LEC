#include<iostream>
using namespace std;

class Account
{
    public:
    float salary=50000;
};

class Developer : public Account
{
    public:
    float bonus()
    {
        float bonus=5000;
        return bonus;
    }
};

int main()
{
    Developer d;
    cout<<"Salary : "<<d.salary<<endl;
    cout<<"Bonus : "<<d.bonus();
    return 0;
}
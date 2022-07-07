#include<iostream>
using namespace std;

template<class T>
class calculator
{
    private:
    T num1,num2;

    public:
    calculator(T n1,T n2)
    {
        num1=n1;
        num2=n2;
    }

    void displayResult()
    {
        cout<<"Numbers are "<<num1<<" and "<<num2<<endl;
        cout<<"Addition is "<<add()<<endl;
        cout<<"Subtraction is "<<sub()<<endl;
        cout<<"Multiplication is "<<mul()<<endl;
        cout<<"Division is "<<div()<<endl;
    }

    T add()
    {
        return num1+num2;
    }
    T sub()
    {
        return num1-num2;
    }
    T mul()
    {
        return num1*num2;
    }
    T div()
    {
        return num1/num2;
    }
};

int main()
{
    calculator<int>intcalc(2,1);
    calculator<float>floatcalc(2.4,1.7);
    cout<<"Int results : "<<endl;
    intcalc.displayResult();
    return 0;
}
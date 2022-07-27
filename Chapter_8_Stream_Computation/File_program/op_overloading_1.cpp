#include<iostream>
using namespace std;

class Complex
{
    double real,img;

    public:
        Complex()
        {
            cout<<"Enter the real part :";
            cin>>real;
            cout<<"Enter the imaginary part :";
            cin>>img;
        }

        void operator >(Complex c)
        {
            if((real==c.real) && (img==c.img))
            {
                cout<<"The complex numbers are equal.";
            }
            else
            {
                cout<<"The complex numbers aren't equal.";           
            }
        }

        void display()
        {
            cout<<"The complex number is "<<real<<"+i"<<img<<endl;
        }
};

int main()
{
    Complex c1,c2;
    c1.display();
    c2.display();
    c1>c2;
}
#include<iostream>
using namespace std;

class Assignment
{
    int x=0;

    public:
        Assignment()
        {
            cout<<"Enter a number :";
            cin>>x;
        }

        void display()
        {
            cout<<"The given number is "<<x<<endl;
        }

        void operator +=(Assignment &A)
        {
            x=x+A.x;
        }

        void result()
        {
            cout<<"The added number is "<<x<<endl;
        }
};

int main()
{
    Assignment a1,a2;
    a1.display();
    a2.display();
    a1+=a2;
    a1.result();
}
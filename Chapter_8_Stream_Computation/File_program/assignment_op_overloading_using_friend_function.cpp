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

        Assignment friend operator +=(Assignment &A1,Assignment &A2);

        void result()
        {
            cout<<"The added number is "<<x<<endl;
        }
};

Assignment operator +=(Assignment &A1,Assignment &A2)
        {
            A1.x=A1.x+A2.x;
            return A1;
        }

int main()
{
    Assignment a1,a2;
    a1.display();
    a2.display();
    a1+=a2;
    a1.result();
}
// WAP to pass object as function parameter.
#include<iostream>
using namespace std;

class student
{
    public:
    double marks;

    student(double m)
    {
        marks=m;
    }
};

void displayData(student s1,student s2)
{
    double avg_mark;
    avg_mark=(s1.marks+s2.marks)/2;
    cout<<"The average marks of two student is "<<avg_mark;
}

int main()
{
    student s1(99.00),s2(78.00);
    displayData(s1,s2);
    return 0;
}
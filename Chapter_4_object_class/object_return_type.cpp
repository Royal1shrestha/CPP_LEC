// WAP to return object.
#include<iostream>
using namespace std;

class student
{
    public:
    double marks1,marks2;

    student(double m1, double m2)
    {
        marks1=m1;
        marks2=m2;
    }
};

student displayData()
{
    student s1,s2;
    s1.marks=99.00;
    s2.marks=76.00;
    return s1;
}

int main()
{
    student s;
    s=displayData();

    return 0;
}
// WAP to return object.
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

student displayData(student s1,student s2)
{
    s1.marks=99.00;
    s2.marks=76.00;
    return student;
    
}

int main()
{
    student s1(99.00),s2(78.00);
    displayData(s1,s2);
    return 0;
}
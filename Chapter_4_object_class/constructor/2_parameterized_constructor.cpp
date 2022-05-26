// WAP to demonstrate parameterized constrctor.

#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int section;
    int age;

    student(string x, int a, int b)
    {
        name=x;
        section=a;
        age=b;        
    }

};

int main()
{
    student s1("Royal",13,19);
    cout<<"My name is "<<s1.name<<endl;
    cout<<"I study in class "<<s1.section<<endl;
    cout<<"My age is "<<s1.age<<endl;
}
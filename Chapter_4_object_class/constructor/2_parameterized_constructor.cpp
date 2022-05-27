// WAP to demonstrate parameterized constrctor.

#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int section;
    int age;

    public:
        student(string x, int a, int b)
        {
            name=x;
            section=a;
            age=b;        
        }

        string display_name()
        {
            return name;
        }
        int display_section()
        {
            return section;
        }
        int display_age()
        {
            return age;
        }

};

int main()
{
    student s1("Royal",13,19);
    cout<<"My name is "<<s1.display_name()<<endl;
    cout<<"I study in class "<<s1.display_section()<<endl;
    cout<<"My age is "<<s1.display_age()<<endl;
}
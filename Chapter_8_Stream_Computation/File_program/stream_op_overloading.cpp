#include<iostream>
using namespace std;

class Student
{
    int age;

    public:
        Student()
        {
            age=25;
        }

        friend 
};

int main()
{
    Student s;
    // operator >>(cin,s)
    // cin >> obj.s
    cin>>s;

    // operator << (cout,s)
    // cout << obj.s
    cout<<s;
// WAP to overload the stream operator to read and display the complex numbers   
// WAP that reads the student information like name,address,phone no,etc and stores in a file. The program should be able to add,show,edit or delete the records from file
}
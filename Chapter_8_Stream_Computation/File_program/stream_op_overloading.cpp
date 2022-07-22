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

        friend istream& operator >>(istream& input,Student& obj);
        friend ostream& operator <<(ostream& output,Student& obj);
};

ostream& operator <<(ostream& output,Student& obj)
{
    output<<obj.age<<endl;
    return output;
}

istream& operator >>(istream& input,Student& obj)
{
    input>>obj.age;
    return input;
}

int main()
{
    Student s;
    // operator >>(cin,s)
    // cin >> obj.s
    

    // operator << (cout,s)
    // cout << obj.s
    cout<<s;
    cin>>s;
// WAP to overload the stream operator to read and display the complex numbers   
// WAP that reads the student information like name,address,phone no,etc and stores in a file. The program should be able to add,show,edit or delete the records from file
}
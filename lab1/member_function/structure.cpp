// WAP to read the record of a student (name,address,roll) and display the record using member function.
#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    string address;

    void display()
    {
    cout<<"Enter the name of student : ";
    cin>>name;
    cout<<"Enter the roll no of student : ";
    cin>>roll;
    cout<<"Enter the address of student : ";
    cin>>address;

    cout<<"\n---DISPLAYING INFORMATION---\n";
    cout<<"Name \t Roll no \t Address \n";

        cout<<name;
        cout<<"\t "<<roll;
        cout<<"\t \t"<<address ;
    }
}s;

int main()
{
    s.display();
}

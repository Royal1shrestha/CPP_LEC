// Q. WAP in C++ to read the record the student's name,address,roll no and display them using structure.
#include<iostream>
using namespace std;

struct student
    {
        char name[50],address[50];
        int roll;
    }st[100];

int main()
{
    int i,n;
    cout<<"Enter the no of students: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the name of the student: ";
        cin>>st[i].name;
        cout<<"Enter the address of the student: ";
        cin>>st[i].address;
        cout<<"Enter the roll no of the student: ";
        cin>>st[i].roll;
    }
    cout<<"\n---DISPLAYING INFORMATION---\n";
    cout<<"Name \t Address \t Roll no \n";
    for(i=0;i<n;i++)
    {
        cout<<st[i].name;
        cout<<"\t "<<st[i].address;
        cout<<"\t \t"<<st[i].roll ;
        cout<<"\n";
    }
          return 0;
}

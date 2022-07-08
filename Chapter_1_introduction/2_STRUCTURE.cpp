// Q. WAP in C++ to read the record the student's name,address,roll no and display them using structure.
#include<iostream>
using namespace std;

struct student
    {
        char name[50],address[50];
        int roll;
    }st;

int main()
{
        cout<<"Enter the name of the student: ";
        cin>>st.name;
        cout<<"Enter the address of the student: ";
        cin>>st.address;
        cout<<"Enter the roll no of the student: ";
        cin>>st.roll;
        cout<<"\n Name: "<<st.name;
        cout<<"\n Address: "<<st.address;
        cout<<"\n Roll no: "<<st.roll;
        return 0;
}

// WAP to read the record of a student (name,address,roll) and display the record using structures.
#include<iostream>
using namespace std;

struct student
{
    char name[30];
    int roll;
    char address[30];
};

int main()
{
    int n,i;
    student s1[100];
    cout<<"Enter the number of student in class : ";
    cin>>n;

    // loop for 'n' no student
    for(i=0;i<n;i++)
    {
    cout<<"Enter the name of student : ";
    cin>>s1[i].name;
    cout<<"Enter the roll no of student : ";
    cin>>s1[i].roll;
    cout<<"Enter the address of student : ";
    cin>>s1[i].address;
    }

    cout<<"\n---DISPLAYING INFORMATION---\n";
    cout<<"Name \t Roll no \t Address \n";
    for(i=0;i<n;i++)
    {
        cout<<s1[i].name;
        cout<<"\t "<<s1[i].roll;
        cout<<"\t \t"<<s1[i].address ;
        cout<<"\n";
    }
}

// WAP to define the class in c++ as shown in the class diagram.
#include<iostream>
using namespace std;

class student
{
    private:
    struct std
    {
    string name;
    int roll;
    string address;
    float percentage;
    }s;

    public:
    struct input()
    {
    cout<<"Enter the name of student : ";
    cin>>s1[i].name;
    cout<<"Enter the roll no of student : ";
    cin>>s1[i].roll;
    cout<<"Enter the address of student : ";
    cin>>s1[i].address;
    }
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

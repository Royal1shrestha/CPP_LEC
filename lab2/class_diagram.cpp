// WAP to define the class in c++ as shown in the class diagram.
#include<iostream>
using namespace std;

class student
{
    public:
    struct std
    {
    string name;
    int roll;
    string address;
    float percentage;
    }s1[100];

    public:
    void input(int n)
    {
        int i;
    // loop for 'n' no student
    for(i=0;i<n;i++)
    {
    cout<<"Enter the name of student : ";
    cin>>s1[i].name;
    cout<<"Enter the roll no of student : ";
    cin>>s1[i].roll;
    cout<<"Enter the address of student : ";
    cin>>s1[i].address;
    cout<<"Enter the percentage of student : ";
    cin>>s1[i].percentage;
    }
    }

    void display(int n)
    {
        int j;
        cout<<"\n---DISPLAYING INFORMATION---\n";
        cout<<"Name \t Roll no \t Address \t Percentage \n";
        for(j=0;j<n;j++)
    {
        if(s1[j].percentage >= 45)
        {
        cout<<s1[j].name;
        cout<<"\t "<<s1[j].roll;
        cout<<"\t \t \0.5t"<<s1[j].address;
        cout<<"\t \t"<<s1[j].percentage<<"%";
        cout<<"\n";
        }
    }
    cout<<"Those whose name didn't appear better study properly.";
    }
};

int main()
{
    int n,i;
    cout<<"Enter the number of student in class : ";
    cin>>n;
    student s;
    s.input(n);
    s.display(n);
    return 0;

}

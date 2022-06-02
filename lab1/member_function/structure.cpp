// WAP to read the record of a student (name,address,roll) and display the record using member function instructures.
#include<iostream>
using namespace std;

struct student
{
    string name;
    int roll;
    string address;

    student(string a,int b,string c)
    {
        name=a;
        roll=b;
        address=c;
    }
    string displayName()
    {
        return name;
    }
    int displayRoll()
    {
        return roll;
    }
    string displayAddress()
    {
        return address;
    }
};

int main()
{
    int n,i;
    student s1("Royal",16,"Lalitpur");

    cout<<"\n---DISPLAYING INFORMATION---\n";
    cout<<"Name \t Roll no \t Address \n";
        cout<<s1.displayName();
        cout<<"\t "<<s1.displayRoll();
        cout<<"\t \t"<<s1.displayAddress();
}

// an example of single inheritance
#include<iostream>
using namespace std;

class student
{
    private:
        char name[25];
        int studID;

    public:
        void getdata()
        {
            cout<<"\n Enter name: ";
            cin>>name;
            cout<<"\n Enter student Id: ";
            cin>>studID;
        }

        void showdata()
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Student ID: "<<studID;
        }
};

class leader: public student
{
    private:
        char union_name[25];

    public:
        void getdata()
        {
            student::getdata();
            cout<<"Enter name of associated student union: ";
            cin>>union_name;
        }

        void showdata()
        {
            student::showdata();
            cout<<"\n Name of the associated student union: "<<union_name;
        }
};

int main()
{
    leader led;
    cout<<"Enter data on leader of student union"<<endl;
    led.getdata();
    cout<<"\n Data on student of student union"<<endl;
    led.showdata();
    return 0;
}
//an example of multiple inheritance
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
            cout<<"\nEnter name: ";
            cin>>name;
            cout<<"\nEnte student Id: ";
            cin>>studID;
        }

        void showdata()
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Student ID: "<<studID;
        }
};

class employee
{
    private:
        char org_name[25];
        int empID;

    public:
        void getdata(){
            cout<<"Enter name of associated organization: ";
            cin>>org_name;
            cout<<"\nEnter employeeID: ";
            cin>>empID;
        }

        void showdata(){
            cout<<"\nName of associated organisation: "<<org_name;
            cout<<"\nEmployee Id: "<<empID;
        }
};

class marketing_officer: public student,public employee
{
    private:
        int working_hour;
    
    public:
        void getdata()
        {
            student::getdata();
            employee::getdata();
            cout<<"Enter working hours: ";
            cin>>working_hour;
        }

        void showdata()
        {
            student::showdata();
            employee::showdata();
            cout<<"\nWorking hours: "<<working_hour;
        }

};

int main()
{
    marketing_officer moff;
    cout<<"Enter data of marketing officer: "<<endl;
    moff.getdata();
    cout<<"Data of marketing officer: "<<endl;
    moff.showdata();
    return 0;
}
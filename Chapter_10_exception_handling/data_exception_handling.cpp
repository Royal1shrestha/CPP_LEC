#include <iostream>
using namespace std;

class Data
{
private:
    string name;
    int roll, marks;

public:
    class Roll_err
    {
    };
    class Marks_err
    {
    };

    void getData()
    {
        cout << "Enter the name of student : ";
        cin >> name;
        cout << "Enter the roll no of student : ";
        cin >> roll;
        if (roll <= 0)
            throw Roll_err();
        cout << "Enter the marks of student : ";
        cin >> marks;
        if (marks > 100)
            throw Marks_err();
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main()
{
    Data d;
    try
    {
        d.getData();
        d.display();
    }

    catch (Data::Roll_err)
    {
        cout << "Exception.Roll no is negative.";
    }

    catch (Data::Marks_err)
    {
        cout << "Exception.Marks is greater than 100.";
    }
}

/* Alternative
#include<iostream>
using namespace std;

    class Roll_err{};
    class Marks_err{};
class Data
{
    private:
    string name;
    int roll,marks;

    public:


    void getData()
    {
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the roll no of student : ";
        cin>>roll;
        if(roll<=0)
        throw Roll_err();
        cout<<"Enter the marks of student : ";
        cin>>marks;
        if(marks>100)
        throw Marks_err();
    }

    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};

int main()
{
    Data d;
    try
    {
        d.getData();
        d.display();
    }

    catch(Roll_err)
    {
        cout<<"Exception.Roll no is negative.";
    }

    catch(Marks_err)
    {
        cout<<"Exception.Marks is greater than 100.";
    }
}
*/
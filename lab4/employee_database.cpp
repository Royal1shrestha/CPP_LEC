#include<iostream>
using namespace std;

class staff
{
    int code;
    string name;

    public:
    void getData()
    {
        cout<<"Enter the code of the employee : ";
        cin>>code;
        cout<<"Enter the name of the employee : ";
        cin>>name;
    }

    void display()
    {
        cout<<"Code: "<<code<<endl;
        cout<<"Name: "<<name<<endl;
    }
};

class teacher : public staff
{
    string subject;
    string publication;

    public:
    void getData()
    {
        staff::getData();
        cout<<"Enter the subject taught by the teacher : ";
        cin>>subject;
        cout<<"Enter the publication of the subject : ";
        cin>>publication;
    }

    void display()
    {
        staff::display();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Publication: "<<publication<<endl;
    }
};

class officer : public staff
{
    int grade;

    public:
    void getData()
    {
        staff::getData();
        cout<<"Enter the grade of the officer : ";
        cin>>grade;
    }

    void display()
    {
        staff::display();
        cout<<"Grade: "<<grade<<endl;
    }
};

class typist : public staff
{
    int speed;

    public:
    void getData()
    {
        staff::getData();
        cout<<"Enter the speed of the typist : ";
        cin>>speed;
    }

    void display()
    {
        staff::display();
        cout<<"Speed: "<<speed<<endl;
    }
};

class regular : public typist
{
    public:
    void getData()
    {
        typist::getData();
    }

    void display()
    {
        typist::display();
    }
};

class casual : public typist
{
    int daily,wages;
    public:
    void getData()
    {
        typist::getData();
        cout<<"Enter the daily speed of typist : ";
        cin>>daily;
        cout<<"Enter the wages of typist : ";
        cin>>wages;
    }

    void display()
    {
        typist::display();
        cout<<"Daily speed : "<<daily<<endl;
        cout<<"Wages : "<<wages<<endl;
    }
};

int main()
{
    teacher t;
    officer o;
    regular r;
    casual c;

    cout<<"Enter data on teacher : "<<endl;
    t.getData();
    cout<<"Enter data on officer : "<<endl;
    o.getData();
    cout<<"Enter data on regular : "<<endl;
    r.getData();
    cout<<"Enter data on casual : "<<endl;
    c.getData();

    cout<<"Data on teacher : "<<endl ;
    t.display();
    cout<<"Data on officer : " <<endl;
    o.display();
    cout<<"Data on regular : " <<endl;
    r.display();
    cout<<"Data on casual : " <<endl;
    c.display();
}
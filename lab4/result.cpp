#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int roll;

public:
    void getData()
    {
        cout << "Enter the name of the student : ";
        cin >> name;
        cout << "Enter the roll no of the student : ";
        cin >> roll;
    }

    void display()
    {
        cout << "Name : " << name;
        cout << "Roll no : " << roll;
    }
};

class test : public student
{
protected:
    int math;
    int eng;

public:
    void getData()
    {
        student::getData();
        cout << "Enter the marks obatined in maths : ";
        cin >> math;
        cout << "Enter the marks obtained in english : ";
        cin >> eng;
    }

    void display()
    {
        student::display();
        cout << "Marks scored in maths : " << math;
        cout << "Marks scored in english : " << eng;
    }

    int testTotal()
    {
        return (math + eng);
    }
};

class sport
{
protected:
    int score;

public:
    void getData()
    {
        cout << "Enter your score : ";
        cin >> score;
    }

    void display()
    {
        cout << "Score in sport : " << score;
    }

    int sportTotal()
    {
        return score;
    }
};

class result : public test, public sport
{
public:
    void getData()
    {
        test::getData();
        sport::getData();
    }

    void display()
    {

        cout << "Total score is : " << testTotal() + sportTotal();
    }
};

int main()
{
    result r;
    cout << "Enter the data for the student......... " << endl;
    r.getData();
    cout << "Data of the student.......... " << endl;
    r.display();
    return 0;
}
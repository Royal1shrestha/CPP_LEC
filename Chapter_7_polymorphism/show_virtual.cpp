#include<iostream>
using namespace std;

class Media
{
    protected:
    char title[25],pub[25];

    public:
    virtual void readData()
    {
        cout<<"Enter title:";
        cin>>title;
        cout<<"Enter publication:";
        cin>>pub;
    }

    virtual void showData()=0;
};

class Book : public Media
{
    private:
    int no_of_pages;

    public:
    void readData()
    {
        Media::readData();
        cout<<"Enter no of pages:";
        cin>>no_of_pages;
    }

    void showData()
    {
        cout<<"***data on Book***";
        cout<<"Title:"<<title<<endl;
        cout<<"Publication:"<<pub<<endl;
        cout<<"Number of pages:"<<no_of_pages<<endl;
    }
};

class DVD : public Media
{
    private:
    int dur;

    public:
    void readData()
    {
        Media::readData();
        cout<<"Enter time of duration:";
        cin>>dur;
    }

    void showData()
    {
        cout<<"***data on Book***";
        cout<<"Title:"<<title<<endl;
        cout<<"Publication:"<<pub<<endl;
        cout<<"Time duration:"<<dur<<endl;
    }
};

int main()
{
    Media *m;
    Book b;
    m=&b;
    cout<<"Enter data on book"<<endl;
    m->readData();
    m->showData();

    DVD d;
    m=&d;
    cout<<"Enter data on book"<<endl;
    m->readData();
    m->showData();
}
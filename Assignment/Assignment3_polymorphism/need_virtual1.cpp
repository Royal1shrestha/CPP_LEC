#include<iostream>
using namespace std;

class Animal
{
    public:
    void display()
    {
        cout<<"\nFrom Base Class Animal";
    }
};

class Cow:public Animal
{
    public:
    void display()
    {
        cout<<"\nFrom Derived Class Cow";
    }
};

class Dog:public Animal
{
    public:
    void display()
    {
        cout<<"\nFrom Derived Class Dog";
    }
};

int main()
{
    Animal *p;
    Animal anm;
    Cow c;
    Dog d;

    p=&anm;
    p ->display();
    p=&c;
    p ->display();
    p=&d;
    p ->display();

}
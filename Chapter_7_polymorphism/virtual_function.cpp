#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void move()=0; //pure virtual functioneta
    virtual void eat()=0;
};

class Dog : public Animal
{
    public:
    void move()
    {
        cout<<"Dog runs"<<endl;
    }

    void eat()
    {
        cout<<"Dog eat meat"<<endl;
    }
};

class Kangaroo : public Animal
{
    public:
    void move()
    {
        cout<<"Kangaroo jumps"<<endl;
    }

    void eat()
    {
        cout<<"Kangaroo eat grass"<<endl;
    }
};

int main()
{
    Animal *an;
    Dog d;
    Kangaroo k;
    an=&d;
    an ->eat();
    an ->move();

    an=&k;
    an ->eat();
    an ->move();

}
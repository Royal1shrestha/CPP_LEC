#include<iostream>
using namespace std;

class Animal
{
    public:
    void eat()
    {
    cout<<"Eating......";
    }
};

class Dog : public Animal
{
    public:
    void bark()
    {
        cout<<"Barking.......";
    }
};

int main()
{
    Animal a;
    Dog d;
    d.eat();
    d.bark();
    a.eat();
    // a.bark();
    return 0;
}
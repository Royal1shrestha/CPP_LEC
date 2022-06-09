// We need protected member if we want to hide data but also want to inherite it.
#include<iostream>
using namespace std;

// base class
class Parent
{
    // protected data member
    protected:
    int id_protected;
};

// sub class from public base class
class Child : public Parent
{
    public:
        void setId(int id)
        {
          // protected member of base class
          id_protected=id;
        }

        void display()
        {
            cout<<"id_protected = "<<id_protected<<endl;
        }
};

int main()
{
    Child obj1;
    obj1.setId(50);
    obj1.display();
    return 0;
}
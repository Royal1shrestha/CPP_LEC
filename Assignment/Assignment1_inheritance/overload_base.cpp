//overriding the function when function are in base
#include<iostream>
using namespace std;

class base
{
    public:
        void display(char c){
            cout<<"display() in base with char arguement"<<endl;
        }

        void display(int i){
            cout<<"display() in base with int arguement"<<endl;
        }
};

class derived: public base
{
    public:
    using base::display;
        void display() 
        {
            cout<<"display() in derived without arguement"<<endl;
        }

        void drvfunc()
        {
            display('a');
            display(5);
        }
};

int main()
{
    derived d1;
    d1.display(); //calls derived class display without arguement
    d1.display('a'); //error: function will be hidden after overriding
    d1.display(5); //error: function will be hidden after overriding  
    d1.base::display('a'); //calls base class display with char arguement
    d1.base::display(5); //calls base class display with int arguement
    return 0;
}
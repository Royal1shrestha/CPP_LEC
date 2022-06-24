#include<iostream>
using namespace std;

class wall
{
    private:
    double length;
    double height;

    public:
    // parameterized constructor
    wall(double len, double hgt)
    {
        // initialize private variables
        length=len;
        height=hgt;
    }

    // copy constructor with wall object as parameter
    // syntax to create copy constructor - classname(classname & objectname)
    wall(wall &obj)
    {
        //initialize private varaibles
        length=obj.length;
        height=obj.height;
    }
    double calculateArea()
    {
        return length*height;
    }
};

int main()
{
    // create an object of wall class
    wall wall1(10.5,8.6);
    // print area of wall
    cout<<"Area of wall 1:"<<wall1.calculateArea()<<endl;
    // copy content of walll to another object wall2
     wall wall2 = wall1;
    // print area of wall2
     cout<<"Area of wall 2 :"<<wall2.calculateArea()<<endl;
     wall wall3(wall1);
     cout<<"Area of wall 3 :"<<wall3.calculateArea()<<endl;
    return 0;
}
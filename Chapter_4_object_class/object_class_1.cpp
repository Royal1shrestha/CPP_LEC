// WAP to calculate area and volume of a room.
#include<iostream>

using namespace std;

class room
{
    public:
    // attributes/data
    int length;
    int breadth;
    int height;
    
    public:
    // methods/functions
    double calculateArea()
    {
        return(length*breadth);
    }
    double calculateVolume()
    {
        return(length*breadth*height);
    }
};

int main()
{
    room R1,R2;
    R1.length=10;
    R1.breadth=20;
    R2.length=10;
    R2.breadth=20;
    R2.height=5;
    cout<<"The area of room 1 is "<<R1.calculateArea()<<endl;
    cout<<"The volume of room 2 is "<<R2.calculateVolume();
}

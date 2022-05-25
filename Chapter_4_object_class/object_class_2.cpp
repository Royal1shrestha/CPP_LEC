// WAP to differentiate between private and public access
#include<iostream>

using namespace std;

class room
{
    private:
    // attributes/data
    int length;
    int breadth;
    int height;
    
    public:
    // methods/functions
    double setValues(double len, double bth, double hgt)
    {
        length=len;
        breadth=bth;
        height=hgt;
    }
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
    R1.setValues(5,10,15);
    R2.setValues(10,20,5);
    cout<<"The area of room 1 is "<<R1.calculateArea()<<endl;
    cout<<"The volume of room 2 is "<<R2.calculateVolume();
}

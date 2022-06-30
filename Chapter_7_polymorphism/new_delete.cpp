#include<iostream>
using namespace std;

int main()
{
    // declare a integer pointer
    int *pointInt;
    
    // declare a float pointer
    float *pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    cout<<"Address of pointInt is "<<pointInt<<endl;
    cout<<"Address of pointFloat is "<<pointFloat<<endl;

    // assigning value to memory
    *pointInt=45;
    *pointFloat=45.45;

    cout<<"Value of pointInt is "<<*pointInt<<endl;
    cout<<"Value of pointFloat is "<<*pointFloat<<endl;

    // deallocating the memory
    delete pointInt;
    delete pointFloat;
}
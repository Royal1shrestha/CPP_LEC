#include<iostream>
using namespace std;

int main()
{
    // assign int value to num_int
    int num_int=9;
    // declare double and char varaible
    double num_double;
    char char_test;
    // implicit conversion
    num_double=num_int;
    char_test=num_int;
    cout<<"num_int = "<<num_int<<endl;
    cout<<"num_double = "<<num_double<<endl;
    cout<<"char_test = "<<char_test;
    
    return 0;
}
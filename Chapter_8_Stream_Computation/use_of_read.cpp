#include<iostream>
using namespace std;

int main()
{
    char str[10];
    cout<<"Enter a string: ";
    cin.read(str,9);
    str[9]='\0'; //add null character to make C style string
    cout<<"You entered: "<<str<<endl;
    return 0;
}
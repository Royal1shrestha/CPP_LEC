#include<iostream>
using namespace std;

int main()
{
    char c,str[25];
    cout<<"Enter a character : ";
    cin.get(c);
    cout<<"Enter a string";
    cin.get(str, 5);
    cout<<"\nThe entered character is ";
    cout.put(c);
    cout<<"\nThe entered string is ";
    cout<<str;
    return 0;
}

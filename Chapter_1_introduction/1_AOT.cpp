// Q. WAP to calculate the area of triangle
    #include<iostream>

    using namespace std;

    int main()
    {
        int base,height;
        float Area;
        cout<<"Enter the value of base: ";
        cin>>base;
        cout<<"Enter the value of height: ";
        cin>>height;
        Area = 0.5*(base*height);
        cout<<"The area of triangle is: "<<Area;
    return 0;
    }
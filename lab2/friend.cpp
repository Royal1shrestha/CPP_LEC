//WAP to add 2 private data of two different classes.
#include<iostream>
using namespace std;

class Data2;
class Data1
{
    friend float add(Data1,Data2);
    private:
    double value1;

    public:
    void getData()
    {
        cout<<"Enter value1 :";
        cin>>value1;
    }
};

class Data2
{
    friend float add(Data1,Data2);
    private:
    double value2;

    public:
    void getData()
    {
        cout<<"Enter value2 :";
        cin>>value2;
    }
};

float add(Data1 d1,Data2 d2)
{
    float add;
    add=(d1.value1+d2.value2);
    return add;
}

int main()
{
    Data1 d1;
    Data2 d2;
    d1.getData();
    d2.getData();
    cout<<"The added value is "<<add(d1,d2);
    return 0;
}
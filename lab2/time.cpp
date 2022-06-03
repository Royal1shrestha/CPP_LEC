//WAP to define a class Time that has 3 data members for hours, minutes and second. Include member functions 
#include<iostream>
using namespace std;

class Time
{
    public:
    int hr;
    int min;
    int sec;

    void gettime()
    {
        cout<<"Enter the time :"<<endl;
        cout<<"Enter hour :";
        cin>>hr;
        cout<<"Enter minute :";
        cin>>min;
        cout<<"Enter second :";
        cin>>sec;

    }

    void sum(Time t1, Time t2)
    {
        hr=t1.hr+t2.hr;
        min=t1.min+t2.min;
        sec=t1.sec+t2.sec;
      if(sec>=60)
        {
            sec-=60;
            min+=1;
            if(min>=60)
            {
                min-=60;
                hr+=1;
            }
        }
    }
    void display()
    {
        cout<<"The resultant time is "<<hr<<":"<<min<<":"<<sec;
    }
};

int main()
{
    Time t1,t2,add;
    t1.gettime();
    t2.gettime();
    add.sum(t1,t2);
    add.display();
    return 0;
}
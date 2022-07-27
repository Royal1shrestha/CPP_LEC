#include<iostream>
using namespace std;

class scalar
{
    double x=0,y=0,z=0;

    public:
        void getData()
        {
            cout<<"Enter x component :";
            cin>>x;
            cout<<"Enter y component :";
            cin>>y;
            cout<<"Enter z component :";
            cin>>z;
        }

        void display()
        {
            cout<<"The given vector is "<<x<<"i+"<<y<<"j+"<<z<<"k"<<endl;
        }

        scalar operator *(scalar &s1)
        {
            scalar s;
            s.x=x*s1.x;
            s.y=y*s1.y;
            s.z=z*s1.z;
            return s;
        }

        void result()
        {
            cout<<"The scalar product of vectors is "<<x+y+z<<endl;
        }
};

int main()
{
    scalar s1,s2,s3;
    s1.getData();
    s1.display();
    s2.getData();
    s2.display();
    s3=s1*s2;
    s3.result();
}
#include<iostream>
using namespace std;

template<class T>
class scalar
{
    T x=0,y=0,z=0;

    public:
        void getData(T a,T b,T c)
        {
            x=a;
            y=b;
            z=c;
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
    scalar<int>s1,s2,s3;
    s1.getData(2,3,4);
    s1.display();
    s2.getData(4,5,6);
    s2.display();
    s3=s1*s2;
    s3.result();
}
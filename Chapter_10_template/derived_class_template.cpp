#include<iostream>
using namespace std;

template<class T>
class base
{
    private:
    T data;

    public:
    base(T a)
    {
        data=a;
    }

    void display()
    {
        cout<<"Data = "<<data<<endl;
    }
};

class derived1 : public base<int>
{
    public:
    derived1(int a) : base<int>(a){}
};

template<class T1>
class derived2 : public base<int>
{
    private:
    T1 data;

    public:
    derived2(int a, T1 b) : base<int>(a),data(b){}
    void display()
    {
        cout<<"In base : ";
        base<int>::display();
        cout<<"In derived : "<<data<<endl;
    }
};

template<class T2>
class derived3 : public base<T2>
{
    public:
    derived3(T2 a) : base<T2>(a){}
};

template<class T3, class T4>
class derived4 : public base<T3>
{
    private:
    T4 data;

    public:
    derived4(T3 a,T4 b) : base<T3>(a),data(b){}
    void display()
    {
        cout<<"In base : ";
        base<T3>::display();
        cout<<"In derived : "<<data<<endl;
    }
};

class base2
{
    private:
    int data;

    public:
    base2(int d)
    {
        data=d;
    }

    void display()
    {
        cout<<"data : "<<data<<endl;
    }
};

template<class T5>
class derived5 : public base2
{
    private:
    T5 data;

    public:
    derived5(int a,T5 b) : base2(a),data(b){}
    void display()
    {
        cout<<"In base : ";
        base2::display();
        cout<<"In derived : "<<data<<endl;   
    }
};

int main()
{
    derived1 d1(5);
    d1.display();
    derived2<float> d2(5,7.5);
    d2.display();
    derived3<int> d3(15);
    d3.display();
    derived4<int,float> d4(25,17.5);
    d4.display();
    derived5<float> d5(35,47.5);
    d5.display();
}
#include<iostream>
using namespace std;

const int MAX=20;
template<class T>
class Stack
{
    private:
    T arr[MAX];
    int top;

    public:
    Stack()
    {
        top=-1;
    }

    void push(T data)
    {
        arr[++top]=data;
    }

    T pop()
    {
        return arr[top--];
    }

    int size()
    {
        return (top+1);
    }
};

int main()
{
    cout<<"Stack for integer data type:"<<endl;
    Stack<int>s1;
    cout<<"Size of stack:"<<s1.size()<<endl;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout<<"Size of stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Size of stack:"<<s1.size()<<endl;
    s1.push(44);
    cout<<"Size of stack:"<<s1.size()<<endl;
    cout<<"Number popped:"<<s1.pop()<<endl;
    cout<<"Size of stack:"<<s1.size()<<endl;

    cout<<"Stack for float data type:"<<endl;
    Stack<float>s2;
    cout<<"Size of stack:"<<s1.size()<<endl;
    s2.push(11.1);
    s2.push(22.2);
    s2.push(33.3);
    cout<<"Size of stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Size of stack:"<<s2.size()<<endl;
    s2.push(44.4);
    cout<<"Size of stack:"<<s2.size()<<endl;
    cout<<"Number popped:"<<s2.pop()<<endl;
    cout<<"Size of stack:"<<s2.size()<<endl;
    return 0;
}

#include <iostream>
using namespace std;
  

template <class T>
int swap_no(T& x, T& y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
  
int main()
{
    int a, b;
    a = 10, b = 20;

    swap_no(a, b);
    cout << a << " and " << b << endl;
    return 0;
}
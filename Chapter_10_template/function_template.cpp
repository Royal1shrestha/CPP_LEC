#include <iostream>
using namespace std;

template <class T1, class T2>
void testfunc(T1 a, T2 b)
{
    cout << a << " " << b << endl;
}

int main()
{
    int inum = 5;
    float fnum = 6.5;
    testfunc(inum, fnum);
    testfunc(20, "Let's go!!!");
    return 0;
}
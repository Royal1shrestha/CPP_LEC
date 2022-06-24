#include<stdio.h>

int main()
{
    int x=5,*p;
    p=&x;
    printf("Value of x : %d",*p);
    printf("Address of x : %p",p);
    return 0;
}
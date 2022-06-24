#include<stdio.h>

int main()
{
int c,*pc;
pc=c; //pointer pc can only carry address but not value(c)
*pc=&c; //*pc hold value but we are giving address(&c)
pc=&c;
*pc=c;
}
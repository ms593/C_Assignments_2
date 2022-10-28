//write a program to swap values of two int varibles without using third variable
#include<stdio.h>
int main()
{
    int x=5,y=6;
    x=x+y;
    y=x-y;
    x=x-5;
    printf("x=%d y=%d",x,y);
    return 0;
}
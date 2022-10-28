//write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>
int main()
{
    int x=2465,y;
    y=x%10;
    x=x-y;
    printf("x=%d",x);
    return 0;
}
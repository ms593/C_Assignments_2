#include<stdio.h>//write a program to input a three digit number and display the sum of the digits
int main()
{
    int x=256,sum=0;
    sum=x%10;
    x=x/10;
    sum=x%10+sum;
    x=x/10;
    sum=x+sum;
    printf("sum=%d",sum);
    return 0;

}
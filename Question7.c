//Program to check given number is even or odd using bitwise operator
#include<stdio.h>
int main()
{
    int x=14;
    (x&1)?printf("odd"):printf("even");
    return 0;
}
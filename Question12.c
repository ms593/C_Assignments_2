/*write a program to take a three digit number from the user and rotate its digits
by one position towards the right. E.g: 231 : 123 .*/
#include<stdio.h>
int main()
{
    int x,y,temp,result;
    printf("give me a number: ");
    scanf("%d",&x);
    temp=x%10*100;
    y=x/10;
    result=temp+y;
    printf("x=%d",result);
    return 0;

}
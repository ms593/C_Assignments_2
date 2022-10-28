//Assume price of 1 UsD is INR 76.23.Write a program to take the amount in INR and convert into USD.
#include<stdio.h>
int main()
{
    float INR , USD ;
    printf("Enter the amount in INR: ");
    scanf("%f",&INR);
    USD=INR/76.23;
    printf("USD=%.2f$",USD);
    return 0;
}
#include<stdio.h>// Write a program to print size of an int,a float, a char, and a double type variable.
int main()
{
    printf("Size of int = %7d\n.",sizeof(int));
    printf("Size of float = %4d\n.",sizeof(float));
    printf("Size of char = %5d\n.",sizeof(char));
    printf("Size of double = %3d\n.",sizeof(double));
    return 0;
}
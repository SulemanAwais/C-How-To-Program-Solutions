/*
(Multiples) 
Write a program that reads in two integers and determines and prints whether the first is a multiple of the second. 
[Hint: Use the remainder operator.]
*/
#include <stdio.h>

int main()
{
    int first,second;
    printf("Enter the first number:\n");
    scanf("%d",&first);
    printf("Enter the second number:\n");
    scanf("%d",&second);
    if(first%second==0)
    {
        printf("The first number is a multiple of second number.");
    }
    else
        printf("The first number is not a multiple of second number.");
    return 0;
}

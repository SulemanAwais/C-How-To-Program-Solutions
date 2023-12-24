/*
(Odd or Even) 
Write a program that reads an integer and determines and prints whether
it’s odd or even. 
[Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.]
*/
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("It is an even number");
    }
    else
        printf("It is an odd number");
    return 0;
}

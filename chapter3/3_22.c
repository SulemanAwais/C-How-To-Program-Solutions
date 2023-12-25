/*
(Checking if a Number is Prime) 
A prime number is any natural number greater than 1 that is divisible only by 1 and by itself. 
Write a C program that reads an integer and determines whether it is a prime number or not.
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(int i=2;i<num;i++)
    {
        if(num%i==0){
            printf("The given number is not a prime number");
            return 0;
        }
    }
    printf("The given number is a prime number");
    return 0;

}

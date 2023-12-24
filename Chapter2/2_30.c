/*
(Separating Digits in an Integer) 
Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three
spaces each. 
[Hint: Use combinations of integer division and the remainder operation.] 
For example, if the user types in 42139, the program should print
4   2   1   3   9

*/
#include<stdio.h>

int main()
{
    int number;
    int first=0;
    int second=0;
    int third=0;
    int forth=0;
    int fifth=0;
    printf("Enter a five digit number\n");
    scanf("%d",&number);
    if(number>99999)
    {
        printf("Number too  big...");
        return 0;
    }
    else
    {
        fifth=number%10;
        number=number/10;
        forth=number%10;
        number=number/10;
        third=number%10;
        number=number/10;
        second=number%10;
        number=number/10;
        first=number%10;
        number=number/10;
        printf("The three digit separated from of the given number is \n");
        printf("%d",first);
        printf("   %d",second);
        printf("   %d",third);
        printf("   %d",forth);
        printf("   %d",fifth);
        return 0;
    }

}

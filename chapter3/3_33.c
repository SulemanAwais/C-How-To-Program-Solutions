/*
(Hollow Square of Asterisks) 
Modify the program you wrote in Exercise 3.32 so that it prints a hollow square. 
For example, if your program reads a size of 5, it should print
*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main()
{
    int side;
    printf("Enter the side of the square (any number between 1 and 20 )\n");
    scanf("%d",&side);
    if(side>20 || side < 1)
    {
        printf("Invalid input");
        return 0;
    }
    else
    {
        for(int i=0;i<side;i++)
        {
            for(int j=0;j<side;j++)
            {
                if(i==0 || i==side-1)
                {
                    printf("*");
                }
                else
                {
                    if(j==0 || j==side-1)
                    {
                        printf("*");
                    }
                    else
                        printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}

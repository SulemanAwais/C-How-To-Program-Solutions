/*
(Tabular Output) 
Write a program that uses looping to print the following table of values.
Use the tab escape sequence, \t, in the printf statement to separate the columns with tabs
*/
#include<stdio.h>
int main()
{
    printf("N\tN^2\tN^3\tN^4\n");
    for(int i=0;i<=10;i++)
    {
        printf("%d\t%d\t%d\t%d\t\n",i,i*i,i*i*i,i*i*i*i);
    }
    return 0;
}



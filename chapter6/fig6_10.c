#include<stdio.h>
#define SIZE 20
int main()
{
    char string1[SIZE];   //character array which can hold 19 characters and one NULL CHARACTER.
    char string2[] = "string literals";
    printf("Enter a string (19 characters max)\n");
    scanf("%19s", string1);
    printf("string1: %s\nstring2: %s\nLOOPING STRING1\n", string1, string2);
    int count   =0;
    for( size_t i=0; i<SIZE && string1[i] != '\0';i++)
    {
        printf("%c ", string1[i]);
        count++;
    }
    printf("%d", count);

}
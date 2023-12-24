/*
(Integer Value of a Character) 
Here’s a peek ahead. In this chapter you learned about integers and the type int. C can also represent uppercase letters, lowercase letters and a considerable variety of special symbols.
C uses small integers internally to represent each different character. The set of characters a computer uses together with the corresponding integer representations for those
characters is called that computer’s character set. You can print the integer equivalent of uppercase A, for example, by executing the statement 
printf( "%d", 'A' ); 
Write a C program that prints the integer equivalents of some uppercase letters, lowercase letters,
digits and special symbols. As a minimum, determine the integer equivalents of the following:
ABCabc012$*+/ and the blank character.
*/
#include <stdio.h>

int main()
{
    char A='A';
    char a='a';
    char B='B';
    char b='b';
    char C='C';
    char c='c';
    char one='1';
    char two='2';
    char zero='0';
    char plus='+';
    char asteric='*';
    char dollar_sign='$';
    char divide='/';
    char blank_space=' ';
    printf ("The integer value of A is :%d",A);
    printf ("\nThe integer value of B is :%d",B);
    printf ("\nThe integer value of C is :%d",C);
    printf ("\nThe integer value of a is :%d",a);
    printf ("\nThe integer value of b is :%d",b);
    printf ("\nThe integer value of c is :%d",c);
    printf ("\nThe integer value of 0 is :%d",zero);
    printf ("\nThe integer value of 1 is :%d",one);
    printf ("\nThe integer value of 2 is :%d",two);
    printf ("\nThe integer value of $ is :%d",dollar_sign);
    printf ("\nThe integer value of + is :%d",plus);
    printf ("\nThe integer value of * is :%d",asteric);
    printf ("\nThe integer value of Blank space is :%d",blank_space);
    char input;
    printf("\nEnter a character\n");
    scanf("%c",&input);
    printf("The integer  equivalent value of this character is :%d",input);
    return 0;
}

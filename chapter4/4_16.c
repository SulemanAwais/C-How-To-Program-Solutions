/*
(Triangle-Printing Program) 
Write a program that prints the following patterns separately, one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a
single printf statement of the form printf("%s", "*"); (this causes the asterisks to print side by side). 
[Hint: The last two patterns require that each line begin with an appropriate number of blanks.]
(A) (B) (C) (D)
* ********** ********** *
** ********* ********* **
*** ******** ******** ***
**** ******* ******* ****
***** ****** ****** *****
****** ***** ***** ******
******* **** **** *******
******** *** *** ********
********* ** ** *********
********** * * **********
*/
#include <stdio.h>
int main() {
    printf("(A)\n");
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n(B)\n");
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n(C)\n");
    for (int i = 10; i >= 1; --i) {
        for (int j = 1; j <= 10 - i; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n(D)\n");
    for (int i = 1; i <= 10; ++i) {
        for (int j = 1; j <= 10 - i; ++j) {
            printf(" ");
        }
        for (int k = 1; k <= i; ++k) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}

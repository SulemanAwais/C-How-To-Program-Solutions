/*
(Modified Diamond-Printing Program) 
Modify the program you wrote in Exercise 4.31 to
read an odd number in the range 1 to 19 to specify the number of rows in the diamond. Your program should then display a diamond of the appropriate size.
*/
#include <stdio.h>
int main() {
    int rows, i, j, space;
    do {
        printf("Enter an odd number in the range 1 to 19: ");
        scanf("%d", &rows);
    } while (rows < 1 || rows > 19 || rows % 2 == 0);
    for (i = 1; i <= rows; i += 2) {
        for (space = 0; space < (rows - i) / 2; ++space) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    for (i = rows - 2; i >= 1; i -= 2) {
        for (space = 0; space < (rows - i) / 2; ++space) {
            printf(" ");
        }
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

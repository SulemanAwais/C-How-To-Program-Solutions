/*
(Table of Decimal, Binary, Octal and Hexadecimal Equivalents) 
Write a program that
prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range
1 through 256. If you’re not familiar with these number systems, read Appendix C before you attempt this exercise. 
[Note: You can display an integer as an octal or hexadecimal value with the conversion specifiers %o and %X, respectively.]
*/
#include <stdio.h>
void printBinary(int num) {
    int binary[8];
    for (int i = 7; i >= 0; --i) {
        binary[i] = num % 2;
        num /= 2;
    }
    for (int i = 0; i < 8; ++i) {
        printf("%d", binary[i]);
    }
}
int main() {
    printf("Decimal\t\tBinary\t\tOctal\t\tHexadecimal\n");
    for (int i = 1; i <= 256; ++i) {
        printf("%-8d", i);
        printf("\t\t");
        printBinary(i);
        printf("\t%o\t\t%X\n", i, i);
        if (i % 16 == 0) {
            printf("\n");
        }
    }
    return 0;
}

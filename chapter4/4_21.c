/*
(ASCII Values) Write a program to convert and print the characters for the ASCII values
0 to 127. The program should print 10 characters per line.
*/
#include <stdio.h>
int main() {
    printf("ASCII Values and Characters 0 to 127:\n");
    for (int i = 0; i <= 127; ++i) {
        printf(" %d:%c ", i, (char)i);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    return 0;
}

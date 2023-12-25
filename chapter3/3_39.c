/*
(Checkerboard Pattern of Asterisks) 
Write a program that displays the following checkerboard pattern:
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/
#include <stdio.h>
int main() {
    for (int row = 1; row <= 8; ++row) {
        for (int col = 1; col <= 16; ++col) {
            if ((row + col) % 2 == 0) {
                printf("%s", "* ");
            } else {
                printf("%s", " ");
            }
        }
        puts("");
    }
    return 0;
}

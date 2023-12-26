/*
(Calculating the Sum of Multiples) 
Write a program to calculate and print the sum of all
multiples of 7 from 1 to 100.
*/
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        if (i % 7 == 0) {
            sum += i;
        }
    }
    printf("Sum of multiples of 7 from 1 to 100: %d\n", sum);
    return 0;
}


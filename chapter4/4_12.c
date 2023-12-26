/*
(Prime Numbers) 
Write a program to calculate and print a list of all prime numbers from
1 to 100.
*/
#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    printf("Prime numbers from 1 to 100:\n");
    for (int i = 1; i <= 100; ++i) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

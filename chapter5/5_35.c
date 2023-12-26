/*
(Fibonacci) The Fibonacci series
0, 1, 1, 2, 3, 5, 8, 13, 21, …
begins with the terms 0 and 1 and has the property that each succeeding term is the sum of the two
preceding terms. a) Write a nonrecursive function fibonacci(n) that calculates the nth Fibonacci
number. Use unsigned int for the function’s parameter and unsigned long long int for its return
type. b) Determine the largest Fibonacci number that can be printed on your system
*/
#include <stdio.h>
#include <limits.h>
unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0;
    unsigned long long int b = 1;
    unsigned long long int result = 0;
    if (n == 0) {
        return a;
    }
    for (unsigned int i = 2; i <= n; ++i) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}
int main() {
    unsigned long long int maxFibonacci = 0;
    unsigned int i = 0;

    while (fibonacci(i) <= ULLONG_MAX - maxFibonacci) {
        maxFibonacci += fibonacci(i);
        printf("The number is: %llu\n", maxFibonacci);
        ++i;
    }

    printf("Largest Fibonacci number that can be printed: Fibonacci(%u) = %llu\n", i - 1, maxFibonacci);

    return 0;
}

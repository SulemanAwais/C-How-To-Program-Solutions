/*
(Factorials)
The factorial function is used frequently in probability problems. The factorial
of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5.
Print the results in tabular format. What difficulty might prevent you from calculating the factorial
of 20?
*/
#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main() {
    printf("Factorials from 1 to 5:\n");
    printf("n\tFactorial\n");
    for (int i = 1; i <= 5; ++i) {
        printf("%d\t%llu\n", i, factorial(i));
    }
    return 0;
}
/*As for calculating the factorial of 20, the main difficulty is the rapid growth of factorials.
Factorials increase very quickly, leading to large numbers. 
The factorial of 20 is already a very large number (20! = 2432902008176640000),
and it can exceed the maximum representable value for certain data types like int or long.
*/
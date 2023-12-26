/*
(Sum and Average of Integers) 
Write a program to sum a sequence of integers and calculate their average. Assume that the first integer read with scanf specifies the number of values to
be entered. Your program should read only one value each time scanf is executed.
A typical input sequence might be 
7 678 234 315 489 536 456 367
*/
#include <stdio.h>
int main() {
    int n, i, num, sum = 0;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i) {
        printf("Enter value #%d: ", i + 1);
        scanf("%d", &num);
        sum += num;
    }
    double average = (double)sum / n;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
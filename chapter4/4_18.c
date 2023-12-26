/*
(Bar-Chart Printing Program) 
One interesting application of computers is drawing graphs and bar charts. 
Write a program that reads five numbers (each between 1 and 30). For each number
read, your program should print a line containing that number of adjacent asterisks. For example,
if your program reads the number seven, it should print *******.
*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter five numbers between 1 and 30:\n");
    for (int i = 1; i <= 5; ++i) {
        printf("Number %d: ", i);
        scanf("%d", &number);
        if (number < 1 || number > 30) {
            printf("Please enter a number between 1 and 30.\n");
            --i; // Decrement i to repeat the current iteration
            continue;
        }
        for (int j = 1; j <= number; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

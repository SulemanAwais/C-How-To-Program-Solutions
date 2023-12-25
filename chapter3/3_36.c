/*
(Armstrong Numbers) 
Armstrong numbers are numbers that are equal to the sum of their digits raised to power of the number of digits in them. The number 153, for example, equals 13 + 53 + 33 .
Thus it is an Armstrong number. Write a program to display all three-digit Armstrong numbers.
*/
#include <stdio.h>
#include <math.h>
int main() {
    int num, actual_num, remainder, output = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    actual_num = num;
    for (; actual_num != 0; actual_num /= 10) {
        remainder = actual_num % 10;
        output += remainder * remainder * remainder;
    }
    if (output == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

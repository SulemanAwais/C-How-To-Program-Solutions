// Recursive fibonacci series
#include <stdio.h>
unsigned long long int fibonacci(unsigned int number);
int main()
{
    unsigned int n;
    printf("Welcome to fibonacci number calculator\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("fibonacci(%u) = %llu\n",n, fibonacci(n));
    
}
unsigned long long int fibonacci(unsigned int number)
{
    if (number<=1)
        return number;
    else
        return(fibonacci(number - 1) + fibonacci(number - 2));
    
}
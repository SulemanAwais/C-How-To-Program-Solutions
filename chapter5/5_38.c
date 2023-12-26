/*
(Visualizing Recursion) 
It’s interesting to watch recursion “in action.” Modify the factorial
function of Fig. 5.18 to print its local variable and recursive call parameter. For each recursive call,
display the outputs on a separate line and add a level of indentation. Do your utmost to make the
outputs clear, interesting and meaningful. Your goal here is to design and implement an output format that helps a person understand recursion better. You may want to add such display capabilities
to the many other recursion examples and exercises throughout the text.
*/
#include <stdio.h>
unsigned long long int factorial(int n, int level) {
    printf("%*sCalling factorial(%d)\n", level * 2, "", n);
    if (n == 0 || n == 1) {
        printf("%*sReturning 1\n", level * 2, "");
        return 1;
    } else {
        unsigned long long int result = n * factorial(n - 1, level + 1);
        printf("%*sReturning %llu\n", level * 2, "", result);
        return result;
    }
}
int main() {
    int num = 5;
    printf("Factorial of %d is %llu\n", num, factorial(num, 0));
    return 0;
}
/*
(Calculating the Value of π) 
Calculate the value of π from the infinite series 
π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 .....
Print a table that shows the value of π approximated by one term of this series, by two terms, by
three terms, and so on. How many terms of this series do you have to use before you first get 3.14?
3.141? 3.1415? 3.14159?
*/
#include <stdio.h>
int main() {
    int terms;
    double piApproximation = 0.0;
    printf("Terms\tApproximation\n");
    for (terms = 1; ; ++terms) {
        piApproximation += (terms % 2 == 1) ? 4.0 / (2 * terms - 1) : -4.0 / (2 * terms - 1);
        printf("%d\t%.10f\n", terms, piApproximation);
        if (piApproximation >= 3.14 && piApproximation <= 3.14159) {
            break;
        }
    }
    printf("\nTo get an approximation of 3.14, 3.141, 3.1415, and 3.14159, you need %d terms.\n", terms);
    return 0;
}

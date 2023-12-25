/*
(Sides of a Triangle) 
Write a program that reads three nonzero integer values and determines and prints whether they could represent the sides of a triangle.
*/
#include <stdio.h>
int main() {
    int side1, side2, side3;
    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("These values can represent the sides of a triangle.\n");
    } else {
        printf("These values cannot represent the sides of a triangle.\n");
    }
    return 0;
}

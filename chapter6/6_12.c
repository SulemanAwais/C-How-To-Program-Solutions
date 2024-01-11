// // a) Read the 20 elements of a double array sales from the keyboard:
// #include <stdio.h>
// #define SIZE_SALES 20
// int main() {
//     double sales[SIZE_SALES];
//     printf("Enter 20 elements for array 'sales':\n");
//     for (int i = 0; i < SIZE_SALES; i++) {
//         scanf("%lf", &sales[i]);
//     }
//     printf("Entered elements for array 'sales':\n");
//     for (int i = 0; i < SIZE_SALES; i++) {
//         printf("%.2lf ", sales[i]);
//     }
//     return 0;
// }


// // b) Add 1000 to each of the 75 elements of a double array allowance:

// #include <stdio.h>
// #define SIZE_ALLOWANCE 75
// int main() {
//     double allowance[SIZE_ALLOWANCE];
//     for (int i = 0; i < SIZE_ALLOWANCE; i++) {
//         allowance[i] += 1000.0;
//     }
//     printf("Updated elements for array 'allowance':\n");
//     for (int i = 0; i < SIZE_ALLOWANCE; i++) {
//         printf("%.2lf ", allowance[i]);
//     }
//     return 0;
// }

// c) Initialize the 50 elements of an integer array numbers to zero:

#include <stdio.h>
#define SIZE_NUMBERS 50
int main() {
    int numbers[SIZE_NUMBERS];
    for (int i = 0; i < SIZE_NUMBERS; i++) {
        numbers[i] = 0;
    }
    printf("Initialized elements for array 'numbers':\n");
    for (int i = 0; i < SIZE_NUMBERS; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}

// d) Print the 10 values of an integer array GPA in column format:

#include <stdio.h>
#define SIZE_GPA 10
int main() {
    int GPA[SIZE_GPA];
    printf("Values of array 'GPA' in column format:\n");
    for (int i = 0; i < SIZE_GPA; i++) {
        printf("%d\n", GPA[i]);
    }
    return 0;
}

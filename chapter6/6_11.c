/*
(Selection Sort) 
A selection sort algorithm for a one-dimensional array has the following steps:
a) The smallest value in the array is found.
b) It is swapped with the value in the first position of the array.
c) The above steps are repeated for the rest of the array starting at the second position and
advancing each time.
Eventually the entire array is divided into two parts: the sub-array of items already sorted
which is built up from left to right and is found at the beginning, and the sub-array of
items remaining to be sorted, occupying the remainder of the array. Write a program
that sorts an array of 10 integers using this algorithm.
*/
#include <stdio.h>
void selectionSort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main() {
    int myArray[10];
    int i;
    printf("Enter 10 integers for the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &myArray[i]);
    }
    printf("Original array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    selectionSort(myArray, 10);
    printf("\nSorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    return 0;
}
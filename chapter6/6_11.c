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
#include<stdio.h>
#define SIZE 10
int main() {
    int arr[SIZE] = {9, 8, 1, 2, 7, 3, 6, 4, 0, 5};
    for (int i = 0; i < SIZE - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < SIZE; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
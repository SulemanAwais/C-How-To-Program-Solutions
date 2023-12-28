/*
(Binary Search) Modify the program of Fig. 6.19 to use a recursive binarySearch function
to perform the binary search of the array. The function should receive an integer array, the starting
index, the ending index and the search key as arguments. If the search key is found, return the array
index; otherwise, return –1
*/
#include <stdio.h>

int binarySearch(int arr[], int start, int end, int key) {
    if (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key) {
            return mid; 
        }
        if (arr[mid] > key) {
            return binarySearch(arr, start, mid - 1, key); 
        }
        return binarySearch(arr, mid + 1, end, key); 
    }
    return -1; 
}
int main() {
    int sizeOfArray;
    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfArray);
    int arr[sizeOfArray];
    printf("Enter %d elements in ascending order:\n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; ++i) {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter the search key: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, sizeOfArray - 1, key);
    if (result != -1) {
        printf("Key %d found at index %d.\n", key, result);
    } else {
        printf("Key %d not found in the array.\n", key);
    }
    return 0;
}
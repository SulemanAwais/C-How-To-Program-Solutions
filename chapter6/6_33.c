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
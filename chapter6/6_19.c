#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    const int rolls = 36000;
    int frequencies[13] = {0};
    srand(time(NULL)); 
    for (int i = 0; i < rolls; ++i) {
        int die1 = rand() % 6 + 1; 
        int die2 = rand() % 6 + 1; 
        int sum = die1 + die2;
        frequencies[sum]++;
    }
    printf("%-10s%-10s\n", "Sum", "Frequency");
    for (int i = 2; i <= 12; ++i) {
        printf("%-10d%-10d\n", i, frequencies[i]);
    }
    printf("\nChecking if frequencies are reasonable:\n");
    for (int i = 2; i <= 12; ++i) {
        float expectedFrequency=0;
        expectedFrequency = (i<=7)?(i-1)/36.0 : (12-i+1)/36.0;
        float actual = (float)frequencies[i] / rolls;
        printf("Sum %d: Expected: %.4f%%, Actual: %.4f%%\n", i, expectedFrequency, actual);
    }
    return 0;
}
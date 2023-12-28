/*
(Dice Rolling) 
Write a program that simulates the rolling of two dice. The program should
use rand twice to roll the first die and second die, respectively. The sum of the two values should
then be calculated. [Note: Because each die can show an integer value from 1 to 6, then the sum of
the two values will vary from 2 to 12, with 7 being the most frequent sum and 2 and 12 the least
frequent sums.] Figure 6.24 shows the 36 possible combinations of the two dice. Your program
should roll the two dice 36,000 times. Use a one-dimensional array to tally the numbers of times
each possible sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable;
i.e., there are six ways to roll a 7, so approximately one-sixth of all the rolls should be 7.
*/
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
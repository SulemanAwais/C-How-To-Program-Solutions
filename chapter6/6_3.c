#include<stdio.h>
#define SIZE 10 // here SIZE is a symbolic constant and  10 is replacement text.
int main()
{
    double array[SIZE] = {0};
    double e_4 = array[3];
    array[8] = 1.667;
    array[5] = 3.333;
    printf("6th index of array is: %.2lf\n",array[5]);
    printf("9th index of array is: %.2lf\n",array[8]);

    for(int i=0; i<=SIZE; i++)
    {
        printf("array[%d]: %f\n", i, array[i]);
    }
}
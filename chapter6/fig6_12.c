// Array name is the same as the address of the array’s first element

#include<stdio.h>
int main()
{
    int array[] = {1,2,3};
    printf("address of array[0]: %p\naddress of array: %p", &array[0], &array);
    return 0;

}
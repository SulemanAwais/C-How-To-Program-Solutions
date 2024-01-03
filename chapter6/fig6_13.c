#include<stdio.h>
void modifyArray(int a[], int size);
void modifyElement(int e);
int main()
{
    puts("array before function call");
    int a[] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");
    puts("array after function call");
    modifyArray(a, 5);
    puts("array after calling modifyArray");
    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    puts("");
    puts("array after calling modifyElement i.e a[3]");
    modifyElement(a[3]);

    for(int i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}
void modifyArray(int a[], int size)
{
    for(int i=0; i<5; i++)
    {
        a[i]*=2;    // multiplying every element of the array with 2
        printf("%d ", a[i]);
    }
}
void modifyElement(int e)
{
    e*=2;
    printf("a[3] is modified to: %d \n", e);
}
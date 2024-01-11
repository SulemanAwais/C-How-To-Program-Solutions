#include<stdio.h>
#define SIZE 3
int main()
{
    int table[SIZE][SIZE];
    printf("total numbers of elements are %d\n",SIZE*SIZE);
    for(int i=0;i<SIZE; i++)
    {
        for(int j=0; j<SIZE; j++)
        {
            table[i][j] = i+j;
        }
    }
    for(int i=0;i<SIZE; i++)
    {
        for(int j=0;j<SIZE; j++)
        {
            printf("table[%d][%d]: %d\n", i,j,table[i][j]);
        }
    }
    int table1[SIZE][SIZE] = 
    {
        {1,8},
        {2,4,6}, 
        {5}
    };
    for(int i=0;i<SIZE; i++)
    {
        for(int j=0;j<SIZE; j++)
        {
            printf("table1[%d][%d]: %d\n", i,j,table1[i][j]);
        }
    }
}
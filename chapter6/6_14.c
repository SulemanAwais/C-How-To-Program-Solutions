#include<stdio.h>
#define SIZE 10
int main()
{
    int set1[SIZE] = {1,3,5,7,9,11,13,15,17,19};
    int set2[SIZE] = {1,2,3,4,5,6,7,8,9,0};
    
    for(int i=0;i<SIZE; i++)
    {
        int is_unique = 1;
        for(int j=0;j<SIZE;j++)
        {
            if( i != j && (set1[i]==set2[i] || set1[i] == set2[j] || set1[i] == set1[j]))
            {
                is_unique = 0;
            }
        }
        if(is_unique)
        {
            printf("%d is unique in the set (set1) \n", set1[i]);
        }
    }
    for(int i=0;i<SIZE; i++)
    {
        int is_unique = 1;
        for(int j=0;j<SIZE;j++)
        {
            if( i != j && (set2[i]==set1[i] || set2[i] == set1[j] || set2[i] == set2[j]))
            {
                is_unique = 0;
            }
        }
        if(is_unique)
        {
            printf("%d is unique in the set (set2) \n", set2[i]);
        }
    }

}
#include<stdio.h>
#define SIZE 10
int main()
{
    int set1[SIZE] = {1,3,5,7,9,11,13,15,17,19};
    int set2[SIZE] = {1,2,3,4,5,6,7,8,9,0};
    int commonElements[2*SIZE];
    int commonCount = 0;
    for(int i=0;i<SIZE; i++)
    {
        int is_common = 0;
        for(int j=0;j<SIZE;j++)
        {
            if( i != j && (set1[i]==set2[i] || set1[i] == set2[j] || set1[i] == set1[j]))
                {
                    is_common = 1;
                    
                }
                if(set1[i] == commonElements[j] || set1[i] == commonElements[2*j +1] || set1[i] == commonElements[j*2]|| set1[i] == commonElements[i])
                    {
                        is_common = 0;
                    }
        }
        if(is_common)
        {
            commonElements[commonCount] = set1[i];
            commonCount++;
            printf("%d is common\n", set1[i]);
        }
    }
    for(int i=0;i<SIZE; i++)
    {
        int is_common = 0;
        for(int j=0;j<SIZE;j++)
        {
            if( i != j && (set2[i]==set1[i] || set2[i] == set1[j] || set2[i] == set2[j]))
                {
                    is_common = 1;
                }
            if(set2[i] == commonElements[j] || set2[i] == commonElements[2*j +1] || set2[i] == commonElements[j*2] || set2[i] == commonElements[i])
                {
                    is_common = 0;
                }
        }
        if(is_common)
        {
            commonElements[commonCount] = set2[i];
            commonCount++;
            printf("%d is common\n", set2[i]);
        }
        
    }

#include<stdio.h>
void staticArrayInit();
void automaticArrayInit();

int main()
{
    puts("function call for the first time");
    staticArrayInit();
    automaticArrayInit();
    puts("function call for the second time");
    staticArrayInit();
    automaticArrayInit();
}
void staticArrayInit()
{
    static int array[3];
    
    puts("static array before increment");
    for(int i=0; i<3; i++)
    {
        
        printf("%d", array[i]);
    }
    puts("");
    puts("static array after increment");
    for(int i=0; i<3; i++)
    {
        array[i]+=5;
        printf("%d", array[i]);
    }
    puts("");
}
void automaticArrayInit()
{
    int array[] = {1,2,3};
    puts("array before increment");
    for(int i=0; i<3; i++)
    {
        
        printf("%d", array[i]);
    }
    puts("");
    puts("array after increment");

    for(int i=0; i<3; i++)
    {
        array[i]+=5;
        printf("%d", array[i]);
    }
    puts("");
}
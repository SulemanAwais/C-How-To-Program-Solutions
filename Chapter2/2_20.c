/*
(Converting from seconds to hours, minutes and seconds)
 Write a program that asks the user to enter the total time elapsed, in seconds, since an event and converts the time to hours,
minutes and seconds. The time should be displayed as hours:minutes:seconds. 
[Hint: Use the remainder operator]
*/
#include <stdio.h>

int main()
{
    int seconds;
    printf("Enter the time in seconds:\t");
    scanf("%d",&seconds);
    int minutes=seconds/60;
    seconds=seconds-(minutes*60);
    int hours=minutes/60;
    minutes=minutes-(hours*60);
    printf("The time in \"hours:minutes:seconds\" format is \n");
    printf("%d",hours);
    printf(":%d",minutes);
    printf(":%d",seconds);

    return 0;

}

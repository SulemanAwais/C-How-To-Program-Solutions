/*
(Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints
the final velocity, v, and distance traversed, s, using the following equations.
a) v = u + at
b) s = ut + 1/2 * (at ^ 2)
*/



#include <stdio.h>

int main(void)
{
    int u,a,t;
    printf("Enter the initial velocity of the object:\t");
    scanf("%d", &u);
    printf("Enter the acceleration of the object:\t");
    scanf("%d",&a);
    printf("Enter the elapsed time:\t");
    scanf("%d",&t);
    int v= u+(a*t);
    int s=(u*t) + (0.5*a*t*t);
    printf("The final velocity is :%d\n", v);
    printf("The distance traversed is :%d\n",s);
    return 0;


}

/*
(Body Mass Index Calculator) 
We introduced the body mass index (BMI) calculator in Exercise 1.12. The formulas for calculating BMI are

BMI = ( weightInPounds × 703/ heightInInches × heightInInches)  

Create a BMI calculator application that reads the user’s weight in pounds and height in inches
(or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays
the user’s body mass index. Also, the application should display the following information from
the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:

BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater

[Note: In this chapter, you learned to use the int type to represent whole numbers. The BMI calculations when done with int values will both produce whole-number results. In Chapter 4 you’ll
learn to use the double type to represent numbers with decimal points. When the BMI calculations
are performed with doubles, they’ll both produce numbers with decimal points—these are called
“floating-point” numbers.]
*/
#include<stdio.h>

int main()
{
    float weight_kg,height_m;
    printf("Enter weight in kilograms:\n");
    scanf("%f",&weight_kg);
    printf("Enter height in meters\n");
    scanf("%f",&height_m);
    float bmi=weight_kg/(height_m*height_m);
    printf("Your BMI is :%f\n",bmi);
    if(bmi<18.5)
        printf("You are UNDERWEIGHT");
    else if(bmi>18.5 && bmi<24.9)
        printf("You are NORMAL");
    else if(bmi>25 && bmi<29.9)
        printf("You are OBESE");
    else if(bmi>29.9)
        printf("You are OVERWEIGHT");
    printf("\n\nBMI VALUES\nUnderweight: less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater\n\n");
    return 0;
}

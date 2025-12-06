/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1_
*/

#include <stdio.h>

int main()
{float Physics,Chemistry,Maths,Sum,Averge;

printf("Enter your Physics Marks: \n");
scanf("%f", &Physics);

printf("Enter your Chemistry Marks: \n");
scanf("%f", & Chemistry);

printf("Enter your Maths Marks: \n");
scanf("%f", &Maths);

Sum=(Physics+Chemistry+Maths);
printf("The Sum of Physics, Chemistry and Maths is %f\n", Sum);

Averge=Sum/3;
printf("Average of your total marks is %f\n", Averge);

if (Averge >= 50)
    {
        printf("Damn man you've got yourself fucking lucky\n");
    }
    else
    {
        printf("Fuck you bastardo you're just piece'a'shit Dumbass\n");
    }

    return 0;
}

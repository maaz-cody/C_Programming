/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1)
*/


#include <stdio.h>

int main()
{
    int i=0,start=0,end=0,sum=0;
    printf("\t Enter the lower limit number.\n");
    scanf("\t %d", &start);
    printf("\t Enter the higher limit number.\n");
    scanf("\t %d", &end);
    
    for(i=start;i<=end;i++)
    {
        if(i%2 !=0)
        {
            sum=sum+i;
        }
    }
    printf("\t The sum of the odd numbers between %d to %d is %d \n",start,end,sum);
    
    return 0;
}

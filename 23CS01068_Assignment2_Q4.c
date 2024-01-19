// Write a C program to check whether a given year is a leap year or not.
#include<stdio.h>
void main()
{
    int y;
    printf("\nEnter a Year = ");
    scanf("%d",&y);
    if(y%4==0)
    {
        if(y%100==0) 
        {
            if(y%400==0) printf("\n%d is a leap year",y);
            else printf("\n%d is not a leap year",y);
        }
        else printf("\n%d is a leap year",y);
    }
    else printf("\n%d is not a leap year",y);
}
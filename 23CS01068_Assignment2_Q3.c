// Write a C program to convert the total number of days into years, months,
// weeks, and days.
// Sample Input:
// Enter total number of Days: 890
// Sample Output:
// Years = 2
// Months = 5
// Weeks = 1
// Days = 3
#include<stdio.h>
void main()
{
    int t,y,m,w,d;
    printf("\nEnter total number of Days: ");
    scanf("%d",&t);
    y=t/365;
    t%=365;
    m=t/30;
    t%=30;
    w=t/7;
    t%=7;
    d=t;
    printf("\nYears =%d",y);
    printf("\nMonths =%d",m);
    printf("\nWeeks =%d",w);
    printf("\nDays =%d",d);


}
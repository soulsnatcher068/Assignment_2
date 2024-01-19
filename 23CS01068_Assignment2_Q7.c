// Given the meal price (base cost of a meal), tip percent (the percentage of the
// meal price being added as tip), and tax percent (the percentage of the meal price
// being added as tax) for a meal, find and print the meal's total cost. Round the
// result to the nearest integer.
#include<stdio.h>
#include<math.h>
void main()
{
    double pr,tp,tx,amt;
    printf("\nEnter meal price = ");
    scanf("%lf",&pr);
    printf("\nEnter tip percent = ");
    scanf("%lf",&tp);
    printf("\nEnter tax percent = ");
    scanf("%lf",&tx);
    amt=pr+((pr*tp)/100)+((pr*tx)/100);
    printf("\nTotal cost = %.0lf",round(amt));
    
}

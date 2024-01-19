// Determine if a number is odd or even using bitwise and(&) operator.
#include<stdio.h>
void main()
{
    int n,r;
    printf("\nEnter a number = ");
    scanf("%d",&n);
    r=n&1;
    if(r%2==0) printf("\n%d is even",r);
    else printf("\n%d is a odd number",r);
}
// Write a C program to find the maximum of three numbers using only the Ternary
// operator (?:).
// Sample Input:
// Input two numbers: 17 -90 12
// Sample Output:
// Max number is 17
#include<stdio.h>
void main()
{
    int x,y,z,max;
    printf("\nEnter three numbers :");
    scanf("%d %d %d",&x,&y,&z);
    max=(x>y)?((x>z)?x:z):((y>z)?y:z);
    printf("\n Max number = %d",max);
    
}
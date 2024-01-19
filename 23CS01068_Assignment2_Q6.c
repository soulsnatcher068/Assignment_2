// Write a C program to find if the given number is odd and within the range
// 100 and 200. (hint: use ternary operator and relational operator)
// Sample Input 1:
// Input a number: 154
// Sample Output 1:
// False
// Sample Input 2:
// Input a number: 139
// Sample Output 1:
// True
#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("\nEnter a number");
    scanf("%d",&n);
    char s[100];
    strcpy(s,(n>=100 && n<=200)?(n%2==0?"False":"True"):"False");
    printf("\n%s",s);

}
    
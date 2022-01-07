/*Program to check whether a number is even or odd.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the no.");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is Even number.",n);
    }
    else
        printf("%d is ODD number.",n);
    return 0;    
}
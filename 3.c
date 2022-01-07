/*Program to check whether a number is positive or negative.*/
#include<stdio.h>
#include<conio.h>
int main()
{
    double n;
    printf("Enter the no.:");
    scanf("%lf",&n);
    if(n<=0)
    {
        if(n==0)
        {
            printf("The is Zero.");

        }
        else
        {
            printf("Number is Negative.");
        }
       }
else{
    printf("Number is Positive");
}
    return 0;
}
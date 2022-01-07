/*WAP to print factorial of a number with recursion and without recursion.*/
#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main()
{
    int n, i,ch;
    int f;
    unsigned long long fact = 1;
    printf("Press 1:Factorial without using recursion.\n");
    printf("Press 2:Factorial  using recursion.\n");
    scanf("%d", &ch);
    if (ch==1)
    {           
        printf("Enter a number to find factorial: ");
        scanf("%d", &n);

    // show error if the user enters a negative integer
    if (n < 0)
        {
            printf("Error! Please enter any positive integer number");
        }
    else
        {
        for (i = 1; i <= n; ++i)
            {
            fact = fact * i; 
            }
        printf("Factorial of Number %d = %llu", n, fact);
        
        }
    }
    else if(ch==2) 
    {

        printf("\n  Enter the number: ");
        scanf("%d", &n);

        f = factorial(n);
        printf("\n  The factorial of the number %d is %d", n, f);
        
    }
    else
    {
        printf("Enter valid choice.");
    }
    return 0;

  }
    
   


int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}
    
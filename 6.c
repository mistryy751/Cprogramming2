/*WAP to check whether a number is Armstrong or not.*/
#include <math.h>
#include <stdio.h>

int main()
{
    int num, origNum, remainder, n = 0;
    float result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    origNum = num;

    // store the number of digits of num in n
    for (origNum = num; origNum != 0; ++n)
    {
        origNum /= 10;
    }

    for (origNum = num; origNum != 0; origNum /= 10)
    {
        remainder = origNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // if num is equal to result, the number is an Armstrong number
    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
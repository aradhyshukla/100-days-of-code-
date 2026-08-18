// Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

/*
Sample Test Cases:
Input 1:
-5
Output 1:
Negative

Input 2:
0
Output 2:
Zero

Input 3:
10
Output 3:
Positive

*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number which you check for positive, negative, zero:");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("The number is positive %d\n", n);
    }
    else if (n < 0)
    {
        printf("The number is negative %d\n", n);
    }
    else
    {
        printf("The number is zero %d\n", n);
    }
    return 0;
}
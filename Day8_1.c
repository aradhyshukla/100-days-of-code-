// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter Character:\n");
    scanf("%c", &a);
    printf("The value of this Character is %d\n", a);

    if (a >= 97 && a <= 122)
    {
        printf("The alphabet is in lower case\n");
    }
    else if (a >= 65 && a <= 90)
    {
        printf("The alphabet is in upper case\n");
    }
    else if (a >= 48 && a <= 57)
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is a special character\n");
    }
    return 0;
}
//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include <stdio.h>
int main()
{
    float celcius,faharanite;
    printf("Enter tem in celsius ");
    scanf("%f",&celcius);
    faharanite = (celcius* 9/5) +32;
    printf(" Fahrenheit = %.2f" , faharanite);
    return 0;
}
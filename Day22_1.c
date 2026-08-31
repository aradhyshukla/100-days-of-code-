/*
Q43: Write a program to check if a number is a strong number.

Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number
*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int original = num;
    int sum = 0;
    
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    
    return sum == original;
}

int main() {
    int num;
    scanf("%d", &num);
    
    if (isStrongNumber(num)) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }
    
    return 0;
}
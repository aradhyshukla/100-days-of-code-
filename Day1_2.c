// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/ #include <stdio.h>
int main() {
    float num1 , num2 , sum , diff , pro , div;
    printf("Enter number1: ");
    scanf("%f", &num1);
    printf("Enter number2: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    if (num2 != 0 ){
        div = num1 / num2;
    }
    else {
    printf(" division can't be executed num2 is zero sorry :) \n");
    }
    
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", pro);
    if (num2 != 0) printf("Division = %.2f\n", div);

    return 0;
}
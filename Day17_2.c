//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>

int main()
{
	int number;
	int is_prime = 1;

	scanf("%d", &number);

	if (number < 2) {
		is_prime = 0;
	} else {
		for (int divisor = 2; divisor * divisor <= number; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	printf("%s\n", is_prime ? "Prime" : "Not prime");
	return 0;
}
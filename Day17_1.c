//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main(void)
{
	int number, original, digit, digits = 0;
	int sum = 0;

	scanf("%d", &number);
	original = number;

	if (number == 0)
		digits = 1;
	else {
		int temp = number;
		while (temp != 0) {
			digits++;
			temp /= 10;
		}
	}

	while (number != 0) {
		int power = 1;
		digit = number % 10;
		for (int i = 0; i < digits; i++)
			power *= digit;
		sum += power;
		number /= 10;
	}

	if (sum == original)
		printf("Armstrong");
	else
		printf("Not Armstrong");

	return 0;
}
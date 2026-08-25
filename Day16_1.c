//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main()
{
	unsigned int number;
	int binary[32];
	int i = 0;

	scanf("%u", &number);

	if (number == 0) {
		printf("0");
		return 0;
	}

	while (number > 0) {
		binary[i++] = number % 2;
		number /= 2;
	}

	while (i > 0) {
		printf("%d", binary[--i]);
	}

	return 0;
}
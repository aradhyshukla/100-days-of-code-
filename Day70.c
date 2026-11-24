/*
Q120: Write a program to take a string input. Change it to sentence case.

Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Convert first character to uppercase if it's a letter
    if (len > 0 && islower(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Capitalize first letter of each word (after a space)
    for (i = 1; i < len; i++) {
        if (str[i - 1] == ' ' && islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }

    // Remove trailing newline if present
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Sentence case: %s\n", str);

    return 0;
}

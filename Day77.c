/*
Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

Explanation 1:
All lowercase letters in input.txt are converted to uppercase using character manipulation before writing to output.txt.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input, *output;
    int ch;

    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Error: input.txt does not exist!\n");
        return 1;
    }

    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Error: Could not create output.txt!\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);
    }

    fclose(input);
    fclose(output);

    printf("Conversion done. Result written to output.txt\n");

    return 0;
}

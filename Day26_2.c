/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main() {
    int pattern[] = {1, 3, 5, 3, 1};
    int i, j, k;
    
    for (i = 0; i < 5; i++) {
        if (i > 0) {
            printf("\n");
        }
        for (j = 0; j < pattern[i]; j++) {
            printf("*\n");
        }
    }
    
    return 0;
}
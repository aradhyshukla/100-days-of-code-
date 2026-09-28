/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    
    int first = 1;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}
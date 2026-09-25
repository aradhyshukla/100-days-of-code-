/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    
    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ') printf(" ");
            start = i + 1;
        }
    }
    printf("\n");
    
    return 0;
}
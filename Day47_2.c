/*
Q94: Find the longest word in a sentence.

Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int maxLen = 0, maxStart = 0;
    int currLen = 0, currStart = 0;
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] != ' ') {
            if (currLen == 0) currStart = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
    }
    
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = currStart;
    }
    
    for (int i = 0; i < maxLen; i++) {
        printf("%c", str[maxStart + i]);
    }
    printf("\n");
    
    return 0;
}
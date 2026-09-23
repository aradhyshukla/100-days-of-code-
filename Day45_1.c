/*
Q89: Count frequency of a given character in a string.

Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    char target;
    scanf(" %c", &target);
    
    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    
    printf("%d\n", count);
    
    return 0;
}
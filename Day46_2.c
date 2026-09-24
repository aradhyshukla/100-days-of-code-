/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int count[26] = {0};
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && count[str[i] - 'a'] > 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }
    
    return 0;
}
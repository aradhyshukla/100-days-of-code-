/*
Q91: Remove all vowels from a string.

Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/

#include <stdio.h>

int isVowel(char c) {
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c;
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int j = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    
    printf("%s\n", str);
    
    return 0;
}
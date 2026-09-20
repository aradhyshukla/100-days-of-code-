/*
Q83: Count vowels and consonants in a string.

Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3
*/

#include <stdio.h>

int isVowel(char c) {
    c = (c >= 'A' && c <= 'Z') ? c + 32 : c;
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int vowels = 0, consonants = 0;
    
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            if (isVowel(str[i])) vowels++;
            else consonants++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    
    return 0;
}
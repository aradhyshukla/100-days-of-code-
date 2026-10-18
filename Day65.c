/*
Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    scanf("%s %s", s, t);
    
    int n1 = strlen(s);
    int n2 = strlen(t);
    
    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }
    
    int freq[26] = {0};
    
    for (int i = 0; i < n1; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }
    
    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }
    
    if (isAnagram) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}

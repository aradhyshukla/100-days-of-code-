/*
Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    
    int n = strlen(s);
    int last[256];
    for (int i = 0; i < 256; i++) {
        last[i] = -1;
    }
    
    int maxLen = 0;
    int left = 0;
    
    for (int right = 0; right < n; right++) {
        if (last[(unsigned char)s[right]] >= left) {
            left = last[(unsigned char)s[right]] + 1;
        }
        last[(unsigned char)s[right]] = right;
        
        int len = right - left + 1;
        if (len > maxLen) maxLen = len;
    }
    
    printf("%d\n", maxLen);
    
    return 0;
}

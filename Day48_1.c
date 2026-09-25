/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while (str2[len2] != '\0' && str2[len2] != '\n') len2++;
    
    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }
    
    char concat[2000];
    for (int i = 0; i < len1; i++) {
        concat[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concat[len1 + i] = str1[i];
    }
    concat[2 * len1] = '\0';
    
    int found = 0;
    for (int i = 0; i < len1; i++) {
        int match = 1;
        for (int j = 0; j < len2; j++) {
            if (concat[i + j] != str2[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }
    
    return 0;
}
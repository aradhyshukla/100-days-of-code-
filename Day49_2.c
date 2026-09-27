/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    
    char lastName[100];
    int lastNameStart = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            lastNameStart = i + 1;
            break;
        }
    }
    
    if (lastNameStart == -1) {
        printf("%s\n", str);
        return 0;
    }
    
    int firstLetter = 1;
    for (int i = 0; i < lastNameStart; i++) {
        if (firstLetter && str[i] != ' ') {
            printf("%c.", str[i]);
            firstLetter = 0;
        } else if (str[i] == ' ') {
            firstLetter = 1;
        }
    }
    printf(" ");
    for (int i = lastNameStart; i < len; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
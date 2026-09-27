/*
Q97: Print the initials of a name.

Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/

#include <stdio.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int len = 0;
    while (str[len] != '\0' && str[len] != '\n') len++;
    
    int firstLetter = 1;
    for (int i = 0; i < len; i++) {
        if (firstLetter && str[i] != ' ') {
            printf("%c.", str[i]);
            firstLetter = 0;
        } else if (str[i] == ' ') {
            firstLetter = 1;
        }
    }
    printf("\n");
    
    return 0;
}
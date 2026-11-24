/*
Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

Explanation 1:
The enum ADD triggers addition of 10 and 20.
*/

#include <stdio.h>

enum Menu { ADD, SUBTRACT, MULTIPLY };

int main() {
    enum Menu choice = ADD;
    int a = 10, b = 20;

    switch (choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}

/*
Q138: Print all enum names and integer values using a loop.

Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

Explanation 1:
Iterating through enum values prints each constant with its assigned integer.
*/

#include <stdio.h>

enum Colors { RED, YELLOW, GREEN };

int main() {
    enum Colors colors[] = { RED, YELLOW, GREEN };
    const char *names[] = { "RED", "YELLOW", "GREEN" };
    int i;

    for (i = 0; i < 3; i++) {
        printf("%s=%d\n", names[i], colors[i]);
    }

    return 0;
}

/*
Q140: Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

Explanation 1:
The enum inside the struct allows representing gender as a named constant.
*/

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", (int *)&p.gender);

    printf("Person: %s | ", p.name);
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}

/*
Q144: Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

Explanation 1:
The structure is passed by value to a function that prints its data.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;

    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %d", s.name, &s.roll, &s.marks);

    printStudent(s);

    return 0;
}

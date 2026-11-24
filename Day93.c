/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

Explanation 1:
Program compares marks of all students and prints the one with the highest.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    struct Student s[3];
    int i;
    int maxIndex = 0;

    printf("Enter details of 3 students (Name Roll Marks):\n");
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < 3; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[maxIndex].name, s[maxIndex].marks);

    return 0;
}

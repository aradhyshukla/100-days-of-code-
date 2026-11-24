/*
Q145: Return a structure containing top student's details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

Explanation 1:
The function returns the structure containing the highest scoring student's details.
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    int i;
    int maxIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return s[maxIndex];
}

int main() {
    struct Student s[3];
    int i;

    printf("Enter details of 3 students (Name Roll Marks):\n");
    for (i = 0; i < 3; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    struct Student top = findTopper(s, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}

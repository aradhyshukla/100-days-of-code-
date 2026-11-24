/*
Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

Explanation 1:
Expected File Content (students.txt): Asha 101 85\nRavi 102 92
*/

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    struct Student s[2];
    int i;

    printf("Enter details of 2 students (Name Roll Marks):\n");
    for (i = 0; i < 2; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);
    }

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    for (i = 0; i < 2; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %d", s[i].name, &s[i].roll, &s[i].marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    return 0;
}

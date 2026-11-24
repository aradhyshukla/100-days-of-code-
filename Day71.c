/*
Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user's name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

Explanation 1:
Expected File Content (info.txt): Name: Rahul Age: 23
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}

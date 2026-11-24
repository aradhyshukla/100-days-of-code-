/*
Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

Explanation 1:
Expected File (destination.txt): Learning C File Handling
*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", sourceName);
    printf("Enter destination filename: ");
    scanf("%s", destName);

    source = fopen(sourceName, "r");
    if (source == NULL) {
        printf("Error: Source file does not exist!\n");
        return 1;
    }

    destination = fopen(destName, "w");
    if (destination == NULL) {
        printf("Error: Could not create destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destName);

    return 0;
}

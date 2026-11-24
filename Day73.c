/*
Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

Explanation 1:
The file has 31 characters including spaces and newlines, 5 words, and 2 lines.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    bool inWord = false;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            words++;
        }
    }

    // If file doesn't end with newline, count last line
    if (characters > 0) {
        // rewind to check last char
        fseek(fp, -1, SEEK_END);
        int last = fgetc(fp);
        if (last != '\n') {
            lines++;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}

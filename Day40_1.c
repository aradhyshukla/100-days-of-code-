/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    for (int k = 0; k < rows + cols - 1; k++) {
        int start = (k < rows) ? k : rows - 1;
        int end = (k < cols) ? 0 : k - cols + 1;
        
        for (int i = start; i >= end; i--) {
            int j = k - i;
            if (i < rows && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }
    printf("\n");
    
    return 0;
}
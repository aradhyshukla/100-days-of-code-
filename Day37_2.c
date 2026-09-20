/*
Q74: Find the sum of each column of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
5 7 9
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
    
    int colSum[cols];
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j];
        }
    }
    
    for (int j = 0; j < cols; j++) {
        printf("%d ", colSum[j]);
    }
    printf("\n");
    
    return 0;
}
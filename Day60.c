/*
Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in 
each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    int deque[n];
    int front = 0, rear = -1;
    
    for (int i = 0; i < n; i++) {
        while (front <= rear && deque[front] <= i - k) {
            front++;
        }
        
        while (front <= rear && arr[deque[rear]] <= arr[i]) {
            rear--;
        }
        
        deque[++rear] = i;
        
        if (i >= k - 1) {
            printf("%d", arr[deque[front]]);
            if (i < n - 1) printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
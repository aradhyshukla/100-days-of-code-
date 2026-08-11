// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{
    float length , breadth , area , peri;
    printf("Enter the length : ");
    scanf("%f", &length);
    printf("Enter the breadth : ");
    scanf("%f", &breadth);
    area = length * breadth;
    peri = 2*(length + breadth);
    printf("%.2f this your area \n ",area);
    printf("%.2f this is your perimeter \n " , peri);
    return 0;
}
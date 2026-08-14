//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main()
{
    int total_sec, hr, min, sec;
    /*
       Here hr denotes hour
            min denotes minutes
            sec denotes seconds
    */

    printf("Enter the total seconds that you want to convert in hr:min:sec format:");
    scanf("%d", &total_sec);

    hr = total_sec / 3600;
    min = (total_sec % 3600) / 60;
    sec = total_sec % 60;

    printf("The time after conversion is %d:%02d:%02d\n", hr, min, sec);

    return 0;
}

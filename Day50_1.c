/*
Q99: Change the date format from dd/mm/yyyy to dd-Mon-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include <stdio.h>

int main() {
    char date[20];
    fgets(date, sizeof(date), stdin);
    
    int day, month, year;
    sscanf(date, "%d/%d/%d", &day, &month, &year);
    
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };
    
    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    }
    
    return 0;
}
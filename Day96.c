/*
Q146: Create Employee structure with nested Date structure for joining date and print details.

Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

Explanation 1:
Nested structure Date is used inside Employee structure to represent joining date.
*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%s", e.name);
    printf("Enter employee ID: ");
    scanf("%d", &e.id);
    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}

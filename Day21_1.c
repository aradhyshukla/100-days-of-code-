#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 10) {
        printf("Number remains: %d\n", num);
        return 0;
    }
    
    lastDigit = num % 10;
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    
    if (firstDigit == lastDigit) {
        printf("Number remains: %d\n", num);
        return 0;
    }
    
    swappedNum = lastDigit * (int)pow(10, digits) + (num % (int)pow(10, digits)) - lastDigit + firstDigit;
    
    printf("Swapped number: %d\n", swappedNum);
    
    return 0;
}
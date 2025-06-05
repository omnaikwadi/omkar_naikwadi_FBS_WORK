#include <stdio.h>

void main() {
    int num, firstDigit, lastDigit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("Not a 3-digit number.\n");
        return 1;
    }

    firstDigit = num / 100;
    lastDigit = num % 10;

    if (firstDigit == lastDigit) {
        printf("%d is a Palindrome.\n", num);
    } else {
        printf("%d is not a Palindrome.\n", num);
    }

    
}

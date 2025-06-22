#include <stdio.h>

void main() {
    int n, first, last;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    first = n;
    while (first >= 10) 
	{
        first /= 10;
    }
    printf("Output: %d (%d + %d)", first + last, first, last);
}

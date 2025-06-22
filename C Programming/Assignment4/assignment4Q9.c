#include <stdio.h>

void main()
 {
    int n, rev = 0, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0) 
	{
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    printf("Output: %s", rev == original ? "Palindrome" : "Not Palindrome");
}

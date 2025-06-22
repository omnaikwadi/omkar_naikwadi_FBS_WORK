#include <stdio.h>

void main()
 {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++) 
	{
        if (n % i == 0) sum += i;
    }
    printf("Output: %s", sum == n ? "Perfect" : "Not Perfect");
}

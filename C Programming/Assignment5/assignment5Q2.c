#include <stdio.h>

void main() 
{
    int n, i, j, isPrime;

    printf("Enter range (n): ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);
    for (i = 2; i <= n; i++)
	 {
        isPrime = 1;
        for (j = 2; j < i; j++) 
		{
            if (i % j == 0)
			 {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
}

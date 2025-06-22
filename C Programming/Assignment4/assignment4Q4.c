#include <stdio.h>


void main()
 {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) isPrime = 0;
    for (i = 2; i <= sqrt(n); i++)
	 {
        if (n % i == 0) 
		{
            isPrime = 0;
            break;
        }
    }
    printf("Output: %s", isPrime ? "Prime" : "Not Prime");
}

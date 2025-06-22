#include <stdio.h>

void main()
 {
    int n, i, temp, digit, fact, sum, j;

    printf("Enter range (n): ");
    scanf("%d", &n);

    printf("Strong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
	 {
        temp = i;
        sum = 0;

        while (temp > 0) 
		{
            digit = temp % 10;
            fact = 1;
            for (j = 1; j <= digit; j++) 
			{
                fact *= j;
            }
            sum += fact;
            temp /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }
}

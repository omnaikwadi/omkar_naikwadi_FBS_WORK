#include <stdio.h>

void main()
 {
    int n, i, temp, digit, sum, digits, power;

    printf("Enter range (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
	 {
        temp = i;
        digits = 0;
        sum = 0;

        
        int count = temp;
        while (count > 0)
		 {
            digits++;
            count /= 10;
        }

        count = temp;
        while (count > 0)
		 {
            digit = count % 10;

            power = 1;
            for (int j = 1; j <= digits; j++) 
			{
                power *= digit;
            }

            sum += power;
            count /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }
}

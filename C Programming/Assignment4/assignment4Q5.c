#include <stdio.h>
#include <math.h>

void main()
 {
    int n, temp, digits = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
	 {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) 
	{
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    printf("Output: %s", sum == n ? "Armstrong" : "Not Armstrong");
}

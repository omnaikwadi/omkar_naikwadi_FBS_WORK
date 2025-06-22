#include <stdio.h>

int factorial(int n)
 {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

void main()
 {
    int n, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
	 {
        int d = temp % 10;
        sum += factorial(d);
        temp /= 10;
    }
    printf("Output: %s", sum == n ? "Strong" : "Not Strong");
}

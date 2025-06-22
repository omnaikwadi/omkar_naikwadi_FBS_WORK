#include <stdio.h>

void main()
 {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Output: ");
    for (int i = 1; i <= 10; i++) 
	{
        printf("%d ", n * i);
    }
}

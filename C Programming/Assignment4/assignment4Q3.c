#include <stdio.h>

void main()
 {
    int start, end, sum = 0;
    printf("Enter start and end values: ");
    scanf("%d %d", &start, &end);
    
    for (int i = start; i <= end; i++) 
	{
        sum += i;
    }
    printf("Output: %d", sum);
}

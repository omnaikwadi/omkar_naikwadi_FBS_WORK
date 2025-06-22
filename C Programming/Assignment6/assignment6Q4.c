#include <stdio.h>

void main()
 {
    int n = 5;
    int i = 1, count = 0;
    while(i <= n) 
	{
        printf("*");
        count++;
        if(count == i) 
		{
            printf("\n");
            i++;
            count = 0;
        }
    }
}

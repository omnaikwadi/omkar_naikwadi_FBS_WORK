#include <stdio.h>

void main()
 {
    int n = 4;
    int i = 0;
    while(i < n * n)
	 {
        printf("* ");
        if ((i + 1) % n == 0)
            printf("\n");
        i++;
    }
}

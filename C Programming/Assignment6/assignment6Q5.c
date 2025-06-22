#include <stdio.h>

void main()
 {
    int n = 5;
    int i = n, count = 0;
    while(i > 0)
	 {
        printf("*");
        count++;
        if(count == i)
		 {
            printf("\n");
            i--;
            count = 0;
        }
    }
}

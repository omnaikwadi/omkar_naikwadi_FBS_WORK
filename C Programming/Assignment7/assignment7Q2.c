#include <stdio.h>

void main()
 {
    int arr[] = {1, 2, 3, 4, 5}, i, n = 5, num, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
	 {
        if(arr[i] == num) 
		
		{
            printf("Number found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("Number not found\n");
}

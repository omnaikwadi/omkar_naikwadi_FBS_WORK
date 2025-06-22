#include <stdio.h>

void main()
 {
    int choice, num, i, temp, rev = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        if (num % 2 == 0)
            printf("Even Number");
        else
            printf("Odd Number");
    }

    else if (choice == 2) 
	{
        int isPrime = 1;
        if (num <= 1) isPrime = 0;
        for (i = 2; i < num; i++)
		 {
            if (num % i == 0) 
			{
                isPrime = 0;
                break;
            }
        }
        printf("%s", isPrime ? "Prime Number" : "Not Prime");
    }

    else if (choice == 3) 
	{
        temp = num;
        while (temp > 0) 
		{
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        printf("%s", (rev == num) ? "Palindrome Number" : "Not Palindrome");
    }

    else if (choice == 4)
	 {
        if (num > 0)
            printf("Positive Number");
        else if (num < 0)
            printf("Negative Number");
        else
            printf("Zero");
    }

    else if (choice == 5)
	 {
        temp = num;
        while (temp > 0) 
		{
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        printf("Reversed Number = %d", rev);
    }

    else if (choice == 6)
	 {
        temp = num;
        while (temp > 0) 
		{
            sum += temp % 10;
            temp /= 10;
        }
        printf("Sum of Digits = %d", sum);
    }

    else {
        printf("Invalid Choice!");
    }
}

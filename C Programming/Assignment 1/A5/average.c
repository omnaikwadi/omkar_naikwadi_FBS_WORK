#include <stdio.h>

void main()
 {
    float num1, num2, num3, num4, num5, sum, average;

    
    printf("Enter five numbers:\n");

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    scanf("%f", &num4);
    scanf("%f", &num5);

    
    sum = num1 + num2 + num3 + num4 + num5;


    average = sum / 5;

    
    printf("The average of the five numbers is: %.2f\n", average);

    
}

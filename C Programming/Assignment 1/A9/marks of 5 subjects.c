#include <stdio.h>

void main() 
{
    float m1, m2, m3, m4, m5, total, percentage;

    
    printf("Enter marks for five subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);
    
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500) * 100;

    
    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

}

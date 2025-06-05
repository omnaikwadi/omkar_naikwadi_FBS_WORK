#include<stdio.h>
void main()
{
	int number ,LastTwoDigits;
	
	printf("enter a number=");
	scanf("%d",&number);
	
	LastTwoDigits = number % 100;
	
	printf("Last Two Digits=",LastTwoDigits);
	
}
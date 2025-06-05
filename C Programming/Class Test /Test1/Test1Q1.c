#include<stdio.h>
void main()
{
	int hours,minutes,seconds,totalseconds;
	
	printf("enter hours=");
	scanf("%d",&hours);
	
	printf("enter minutes=");
	scanf("%d",&minutes);
	
	printf("enter seconds=");
	scanf("%d",&seconds);
	
	totalseconds=(hours*3600)+(minutes*60)+ seconds;
	
	printf("totalseconds=%d\n",totalseconds);
	
}
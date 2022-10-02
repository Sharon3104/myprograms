#include<stdio.h>
int main()
{
	int year;
	printf("Enter Year:");
	scanf("%i",&year);
	
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("leap year....");
	}
	else
	{
		printf("not");
	}
	return 0;
}
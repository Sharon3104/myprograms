#include<stdio.h>
int main()
{
	int n;
	int number;
	
	printf("Enter any int number:");
	scanf("%d",&number);
	for(n=1;n<=10;n++)
	{
		printf("%i x %i= %i\n",n,number,number*n);
	}
}
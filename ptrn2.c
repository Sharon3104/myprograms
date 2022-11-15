#include<stdio.h>
int main()
{
	int row,cal,x=1;
	for(row=5;row>=1;row--)
	{
		for(cal=1;cal<=row;cal++)
		{
			printf(" ");
		}
		for(cal=row;cal<=5;cal++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

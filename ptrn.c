#include<stdio.h>
int main()
{
	int row,cal,x=1;
	for(row=1;row<=4;row++)
	{
		for(cal=1;cal<=row;cal++)
		{
			printf("%i",x++);
		}
		printf("\n");
	}
	return 0;
}
	
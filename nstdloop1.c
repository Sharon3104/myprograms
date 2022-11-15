#include<stdio.h>
int main()
{
	int row,col;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(row%2!=0)
			{
				printf("A ");
			}
			else
			{
				printf("B ");
			}
		}
		printf("\n");
	} 
	return 0;
}
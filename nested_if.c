#include<stdio.h>
int main()
{
	int a=2,b=4,c=6;
	if(a>b)
		{
			if(a>c)
			{
				printf("%i",a);
			}
			else
			{
				printf("%i",c);
			}
		}
		else if (b>c)
		{
			printf("%i",b);
		}
		else
		{
			printf("%i",c);
		}
		return 0;
}
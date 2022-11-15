#include<stdio.h>
int main()
{
	int choice;
	char ch;
	
	printf("Enter value:");
	scanf("%c",&ch);
	
	printf("Enter your choice:");
	scanf("%i",&choice);
	int a=2,b=4,c=6;
	switch(choice)
	{
		case 1:if (a>b && a>c)
		{
			printf("%i\n",a);
		}
		else if (b>c)
		{
			printf("%i\n",b);
		}
		else
		{
			printf("%i\n",c);	
		}
	
	break;
		case 2: if (ch>='a' && ch<='z')
		{
			printf("Alphabet");
		}
		else 
		{
			printf("Not a Alphabet");
		}
		break;
		{
			defualt("invalid Choice");	
		}
		break;
	}
	return 0;
}
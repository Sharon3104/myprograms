#include<stdio.h>
int main()
{
	int a,b,choice;
	
	printf("Enter your choice:");
	scanf("%i",&choice);

	printf("Enter your first num:");
	scanf("%i",&a);
	
	printf("Enter your first num:");
	scanf("%i",&b);
	
	switch(choice)
	{
		case 1: printf("%i",a+b);
		break;
		
		case 2: printf("%i",a-b);
		break;
		
		case 3: printf("%i",a*b);
		break;
		
		case 4: printf("%i",a/b);
		break;
		
		case 5: printf("%i",a%b);
		break;
		
		default: printf("Invalid Choice....!");
	}
	return 0;
}
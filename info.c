#include<stdio.h>
int main()
{
	char name[20],address[20];
	int age;
	
	printf("Enter your name:");
	scanf("%s",&name);
	

	printf("\nEnter Dob:");
	scanf("%i",&age);


	printf("\nEnter your Address:");
	scanf("%s",&address);

	printf(" \nyour name is %s\n",name);
	printf(" your Age is %i\n",age);
	printf(" your Address is %s\n",address);
	
	return 0;
}	
#include<stdio.h>
int main()
{
	int i,n1=0,n2=1,n3,range=10;
	

	printf("%i %i",n1,n2);
	
	for(i=0;i<=range;i++)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%i",n3);
		
	}
	
	return 0;
}
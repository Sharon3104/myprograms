#include<stdio.h>
int main()
{
	int number=121,rem,rev_num=0;
	int n;
	n=number;
	while(n!=0)
	{
		rem=n%10;
		rev_num=rev_num*10+rem;
		n=n/10;
	}
	printf("%i\n\n",rev_num);
	if(number==rev_num)
	{
		printf("Palindrom ...");
	}
	else
	{
		printf("Not Palindrom");
	}
	return 0;
}
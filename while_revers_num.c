#include<stdio.h>
int main()
{
	int number=123,rem,result=0;
	while(number!=0)
	{
		rem=number%10;
		result=result*10+rem;
		number=number/10;
	}
	printf("%i\n\n",result);
	return 0;
}
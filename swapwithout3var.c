#include<stdio.h>
int main()
{
	int a=5,b=10;
//	c=a;
//	a=b;
//	b=c;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%i\nb=%i",a,b);
	return 0;
}
#include<stdio.h>
int main()
{
	int a=34,b=44,c=55,max;
	max=(a>b && a>c?a:(b>c)?b:c);
	printf("%i",max);
	return 0;
}
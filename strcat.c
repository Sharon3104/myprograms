#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10]="Hellow";
	char str2[10]="World";

	strcat(str1, str2);
	printf("output is: %s",str1);
	return 0;
}
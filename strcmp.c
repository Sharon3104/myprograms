#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	
	
	puts("Enter your first string:");
	gets(str1);
	
	puts("Enter your second string:");
	gets(str2);
	
	if(strcmp(str1,str2)==0)
	{	
		puts("The String is Equal");
	}
	else
	{
		puts("The String is not Equal");	
	}
	return 0;
}
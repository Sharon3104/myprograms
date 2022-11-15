#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any value:");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z'  ||  ch>='A' && ch<='Z')
		{
			printf("Alphabet");
		}
		else
		{
			printf("Not Alphabet");
		}
		return 0;
}
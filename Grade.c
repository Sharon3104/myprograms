#include<stdio.h>
int main()
{
	int Phy,Chem,Maths;
	float Totalmarks,Percentage;

	printf("Enter marks of Phy:");
	scanf("%i",&Phy);
	
	printf("Enter marks of Chem:");
	scanf("%i",&Chem);
	
	printf("Enter marks of Maths:");
	scanf("%i",&Maths);
	
	printf("Phy=%i\nChem=%i\nMaths=%i",Phy,Chem,Maths);
	
	Totalmarks=Phy+Chem+Maths;
	printf("\n\nTotalmarks=%.f",Totalmarks);

	Percentage=Totalmarks/3;
	printf("\n\nPersentage=%.f",Percentage);
	
	if(Percentage>=90)
	{
		printf("\n Grade A");
	}
	else if(Percentage>=80)
	{
		printf("\n Grade B");
	}
	else if(Percentage>=70)
	{
		printf("\n Grade C");
	}
	else if(Percentage>=60)
	{
		printf("\n Grade D");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}


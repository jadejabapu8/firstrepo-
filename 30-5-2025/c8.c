#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,k,num;


	printf("Enter the Row for the Pyramid : ");
	scanf("%d",&i);

	for (num=1;num <=i;num++)
	{
		for (k=1;k<i-num+26;k++)
			printf(" ");

		for (j=1; j <= num; j++)
			printf("* ");

		printf("\n");
	}
	getch();
}
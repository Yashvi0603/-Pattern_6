/*
	Name: c programe for print pattern
		INPUT = 4
		4 3 2 1
		3 2 1
		2 1
		1
		1
		2 1
		3 2 1
		4 3 2 1
*/
#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
			printf("%d ",j);
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
			printf("%d ",j);
		printf("\n");
	}
}

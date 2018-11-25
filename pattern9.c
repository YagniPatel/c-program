/*  aim : to print pattern
	111
	1 1
	111
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	printf("enter a num :== ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || j==1 || i==n || j==n)
				printf("1");
			else 
				printf(" ");
		}
		printf("\n");
	}
}

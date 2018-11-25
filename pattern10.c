/*  aim : to print pattern
	***
	*A*
	***
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a;
	printf("enter a num :== ");
	scanf("%d",&n);
	a=n/2;
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i==1 || j==1 || i==n || j==n)
				printf("*");
			else if(j==a+1 && i==a+1)
				printf("A");
			else 
				printf(" ");
		}
		printf("\n");
	}
}

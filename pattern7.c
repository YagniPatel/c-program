/* aim : to print pattern
   1
   2*2
   3*3*3
   4*4*4*4
   4*4*4*4
   3*3*3
   2*2
   1
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("enter a num :==");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			if(j==1)
				printf("%d",i);
			else
				printf("*%d",i);
		}
		printf("\n");
	}
	for(i=n; i>=1; i--)
	{
		for(j=i; j>=1; j--)
		{
			if(j==i)
				printf("%d",i);
			else
				printf("*%d",i);
		}
		printf("\n");
	}
}

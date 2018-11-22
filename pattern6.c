/*  aim : to print pattern
	1
	10
	101
	1010
	10101
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("enter a line num :==");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		k=0;
		for(j=1; j<=i; j++,k++)
		{
			if(k%2==0)
				printf("1");
			else
				printf("0");
		}
		printf("\n");
	}
	
}

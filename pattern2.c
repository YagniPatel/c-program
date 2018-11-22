/* aim : to print pattern 
   1
   121
   12321
   1234321
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,k;
	printf("enter a num :== ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)	
	{
		for(j=1; j<=i; j++)
			printf("%d",j);
		for(k=i; k>1; k--)	
			printf("%d",k-1);
		printf("\n");
	}
}

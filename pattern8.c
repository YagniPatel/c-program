/*  aim : to print pattern
	1
	232
	45654
	78910987
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n,m=1,p;
	printf("enter a num :==");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++,m++)
			printf("%d",m);
		p=m-2;
		for(k=i; k>1; k--,p--)
			printf("%d",p);
		printf("\n");
		
	}	
}

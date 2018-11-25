/*  aim : to print pattern 
	55555
	45555
	34555
	23455
	12345
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	printf("enter a num :== ");
	scanf("%d", &n);
	for(i=n; i>=1; i--)
	{
		for(j=i; j<=n; j++)
			printf("%d",j);
		for(k=1; k<i; k++)
			printf("5");
		printf("\n");
	}
}

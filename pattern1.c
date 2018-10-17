#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k;
	
	for(i=5; i>0; i--)
	{
		for(j=5; j>=i; j--)
			printf(" %d",j);	
		for(k=1; k<i; k++)
			printf(" %d",i);
		for(k=1; k<i; k++)
			printf(" %d",i);
		for(j=i; j<5; j++)
			printf(" %d",j+1);
		printf("\n");		
	}
	for(i=2; i<6; i++)
	{
		for(j=5; j>=i;j--)
		   printf(" %d",j);
		for(j=2;j<=i;j++)
		   printf(" %d",i); 
		for(j=2;j<=i;j++)
		   printf(" %d",i);
		for(j=i;j<5;j++) 
		   printf(" %d",j+1);     
		printf("\n");     
		
	}
}

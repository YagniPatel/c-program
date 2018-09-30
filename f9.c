#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter a number : ");
	scanf("%d", &a);
	for(b=1;b<=a;b++)
	{
		printf("\n*");
		for(c=2;c<=b;c++)
		{
			printf("*");
		}
	}
		
}
